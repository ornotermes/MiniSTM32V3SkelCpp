#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#+	Copyright (c) 2012 Rikard Lindstrom <ornotermes@gmail.com>
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

def argParser():
    p = argparse.ArgumentParser()

    p.add_argument( "-f", "--file", dest="file", default="-", metavar="file.bdf", help="")
    p.add_argument( "-n", "--name", dest="name", default="", metavar="name", help="Name of the output structure.")
    
    return vars(p.parse_args())

arg = argParser()

font = open(arg["file"])

inChar = False
tempLine = ""
charNum = 0
copyright = True
notice = True
width = 8
height = 16
space = 1

def nextLine():
	return font.nextline()
	


for line in font:
	lineSplit = line.split(" ", 1)
	if lineSplit[0] == "STARTFONT":
		print ("/*")
		print ("\tbdf2hpp - Extract data from bitmap font to header format")
		print ("\tCommand: %s" % " ".join(sys.argv))
		
	if lineSplit[0] == "FONT":
		print ("\t" + lineSplit[1].rstrip("\n").lstrip("\"").rstrip("\""))
		
	if lineSplit[0] == "COMMENT":
		print ("\t" + lineSplit[1].rstrip("\n").lstrip("\"").rstrip("\""))
		
	if lineSplit[0] == "COPYRIGHT":
		print ("\t" + lineSplit[1].rstrip("\n").lstrip("\"").rstrip("\""))
		copyright = False
		
	if lineSplit[0] == "NOTICE":
		print ("\t" + lineSplit[1].rstrip("\n").lstrip("\"").rstrip("\""))
		notice = False
		
	if lineSplit[0] == "FONTBOUNDINGBOX":
		s = lineSplit[1].split(" ", 2)
		width = s[0]
		height = s[1]
		
	if line == "ENDPROPERTIES\n":
		if (copyright):
			print ("\tTODO: Replace this with original font author(s)!")
		if (notice):
			print ("\tTODO: Replace this with original font license!")
		print ("*/")
		print ("#ifndef {0}_HPP".format(arg["name"].upper()))
		print ("#define {0}_HPP".format(arg["name"].upper()))
		print ("static const Font {0}".format(arg["name"]))
		print ("{")
		print ("\t{0},".format(width))
		print ("\t{0},".format(height))
		print ("\t{0},".format(space))
		print ("\t{")
	
	if line == "ENDFONT\n":
		print ("\t}")
		print ("};")
		print ("#endif")
	
	if lineSplit[0] == "STARTCHAR":
		tempLine = "//" + lineSplit[1].rstrip("\n")
		
	if lineSplit[0] == "ENCODING":
		charNum = int(lineSplit[1].rstrip("\n"))
		if charNum <= 255 and charNum >= 32:
			print "\t\t" + tempLine + ": " + str(charNum)
			
	if line == "ENDCHAR\n":
		inChar = False
		if charNum <= 255 and charNum >= 32:
			print "\t\t" + tempLine
			
	if inChar:
		tempLine += "0x" + line[0] + line[1] + ", "
		
	if line == "BITMAP\n":
		if charNum <= 255 and charNum >= 32:
			inChar = True
		tempLine = ""
