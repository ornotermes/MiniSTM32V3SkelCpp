#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#+	Copyright (c) 2012, 2014 Rikard Lindstrom <ornotermes@gmail.com>
#
#	This program is free software: you can redistribute it and/or modify
#	it under the terms of the GNU General Public License as published by
#	the Free Software Foundation, either version 3 of the License, or
#	(at your option) any later version.
#
#	This program is distributed in the hope that it will be useful,
#	but WITHOUT ANY WARRANTY; without even the implied warranty of
#	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#	GNU General Public License for more details.
#
#	You should have received a copy of the GNU General Public License
#	along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

import sys
import argparse
from PIL import Image, ImageDraw

print("// img2hpp - Convert image to header either with a colormap in 16 bit RRRRRGGGGGGBBBBB or 1-bit mask.")
print("// Command: %s" % " ".join(sys.argv))

def argParser():
    p = argparse.ArgumentParser()

    p.add_argument( "-c", "--colors", dest="colors", default="256", metavar="nnn", help="Number of colors if downscaling, max 256.")
    p.add_argument( "-d", "--dither", dest="dither", action="store_const", default=False, const=True, help="Dither if downscaling.")
    p.add_argument( "-m", "--mask", dest="mask", action="store_const", default=False, const=True, help="Convert bitmap to mask")
    p.add_argument( "-i", "--input", dest="input", default="-", metavar="file.png", help="")
    p.add_argument( "-n", "--name", dest="name", default="", metavar="string", help="Name of the output structure.")
    p.add_argument( "-o", "--output", dest="output", default="", metavar="file.hpp", help="Name of output file.")
    
    return vars(p.parse_args())

arg = argParser()
	
colors = int(arg["colors"])

srcImg = Image.open(arg["input"])

if arg["mask"]:
	colors = 2
	newImg = srcImg.convert('1')
	
	if(len(arg["output"]) > 0):
		newImg.save(arg["output"])
		
	print ("#ifndef {0}_HPP".format(arg["name"].upper()))
	print ("#define {0}_HPP".format(arg["name"].upper()))
	print ("typedef struct {0}_struct {0}_type;".format(arg["name"]))
	print ("struct {0}_struct".format(arg["name"]))
	print ("{")
	print ("\tuint16_t Width;")
	print ("\tuint16_t Height;")
	s = (newImg.size[0]*newImg.size[1]) /8
	if ((newImg.size[0]*newImg.size[1]) % 8):
		s+=1
	print ("\tuint8_t Data[{0}];".format( s ))
	print ("};")
	print ("static const {0}_type {0}_data".format(arg["name"]))
	print ("{")
	print ("\t{1},".format(arg["name"], newImg.size[0]))
	print ("\t{1},".format(arg["name"], newImg.size[1]))
	print ("\t{")
	imgString=""
	i=0
	pixels = 0
	for pixel in list(newImg.getdata()):
		i += 1
		pixels = (pixels << 1) | (1 & ~bool(pixel))
		if i == 8:
			imgString += (str(pixels) + ", ")
			i = 0
			pixels = 0
		if (len(imgString) > 59):
			print ("\t\t" + imgString)
			imgString = ""
	print ("\t\t" + imgString)
	print ("}")
	print ("};")
	print ("Mask {0}".format(arg["name"]))
	print ("{");
	print ("\t.Width = &{0}_data.Width,".format(arg["name"]))
	print ("\t.Height = &{0}_data.Height,".format(arg["name"]))
	print ("\t.Data = &{0}_data.Data[0]".format(arg["name"]))
	print ("};")
	print ("#endif")
	
else:
	if arg["dither"]:	
		pltImg = srcImg.convert("RGB").convert("P", colors=colors, palette=Image.ADAPTIVE)
		tmpImg = srcImg.copy()
		tmpImg.palette = pltImg.palette
		newImg = tmpImg._new(tmpImg.im.convert('P', Image.FLOYDSTEINBERG))
	else:
		newImg = srcImg.convert("RGB").convert("P", palette=Image.ADAPTIVE, colors=colors)
	if(len(arg["output"]) > 0):
		newImg.save(arg["output"])

	print ("#ifndef {0}_HPP".format(arg["name"].upper()))
	print ("#define {0}_HPP".format(arg["name"].upper()))
	print ("typedef struct {0}_struct {0}_type;".format(arg["name"]))
	print ("struct {0}_struct".format(arg["name"]))
	print ("{")
	print ("\tuint16_t Width;")
	print ("\tuint16_t Height;")
	print ("\tuint16_t Palette[{0}];".format(arg["colors"]))
	print ("\tuint8_t Data[{0}];".format(newImg.size[0]*newImg.size[1]))
	print ("};")
	print ("static const {0}_type {0}_data".format(arg["name"]))
	print ("{")
	print ("\t{1},".format(arg["name"], newImg.size[0]))
	print ("\t{1},".format(arg["name"], newImg.size[1]))
	print ("\t{")

	color_map = newImg.resize((colors, 1))
	color_map.putdata(range(colors))
	color_map = list(color_map.convert("RGB").getdata())
	for color in color_map:
		print ("\t\t" + hex( ((color[0]&0xf8)<<8) | ((color[1]&0xfc)<<3) | ((color[2]&0xf8)>>3) )+",\t//R:%i\tG:%i\tB:%i" % color)
	print ("\t},");
	
	print ("\t{")
	imgString=""
	for pixel in list(newImg.getdata()):
		imgString += (str(pixel) + ", ")
		if (len(imgString) > 51):
			print ("\t\t" + imgString)
			imgString = ""
	print ("\t\t" + imgString)
	print ("\t}");
	print ("};");
	print ("Image {0}".format(arg["name"]))
	print ("{");
	print ("\t.Width = &{0}_data.Width,".format(arg["name"]))
	print ("\t.Height = &{0}_data.Height,".format(arg["name"]))
	print ("\t.Palette = &{0}_data.Palette[0],".format(arg["name"]))
	print ("\t.Data = &{0}_data.Data[0]".format(arg["name"]))
	print ("};")
	print ("#endif")
