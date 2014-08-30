/*
	Copyright (C) 2012 Dimitar Toshkov Zhekov
	Copyright (C) 2012,2014 Rikard Lindström
	Licensed under the SIL Open Font License, Version 1.1
*/
#ifndef FONT6X12_HPP
#define FONT6X12_HPP
static const Font Font6x12
{
	6,
	12,
	1,
	{
		//space: 32
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//exclam: 33
		0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x20, 0x20, 0x00, 0x00, 
		//quotedbl: 34
		0x00, 0x50, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//numbersign: 35
		0x00, 0x00, 0x50, 0x50, 0xF8, 0x50, 0x50, 0xF8, 0x50, 0x50, 0x00, 0x00, 
		//dollar: 36
		0x00, 0x00, 0x20, 0x70, 0xA8, 0xA0, 0x70, 0x28, 0xA8, 0x70, 0x20, 0x00, 
		//percent: 37
		0x00, 0x00, 0x48, 0xA8, 0x50, 0x10, 0x20, 0x28, 0x54, 0x48, 0x00, 0x00, 
		//ampersand: 38
		0x00, 0x00, 0x20, 0x50, 0x50, 0x20, 0x68, 0x90, 0x90, 0x68, 0x00, 0x00, 
		//quotesingle: 39
		0x00, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//parenleft: 40
		0x00, 0x00, 0x10, 0x20, 0x40, 0x40, 0x40, 0x40, 0x20, 0x10, 0x00, 0x00, 
		//parenright: 41
		0x00, 0x00, 0x40, 0x20, 0x10, 0x10, 0x10, 0x10, 0x20, 0x40, 0x00, 0x00, 
		//asterisk: 42
		0x00, 0x00, 0x00, 0x00, 0x50, 0x20, 0xF8, 0x20, 0x50, 0x00, 0x00, 0x00, 
		//plus: 43
		0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0xF8, 0x20, 0x20, 0x00, 0x00, 0x00, 
		//comma: 44
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x40, 0x00, 
		//hyphen: 45
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//period: 46
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 
		//slash: 47
		0x00, 0x00, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x00, 0x00, 
		//zero: 48
		0x00, 0x00, 0x70, 0x88, 0x98, 0xA8, 0xC8, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//one: 49
		0x00, 0x00, 0x20, 0x60, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//two: 50
		0x00, 0x00, 0x70, 0x88, 0x88, 0x10, 0x20, 0x40, 0x80, 0xF8, 0x00, 0x00, 
		//three: 51
		0x00, 0x00, 0x70, 0x88, 0x08, 0x30, 0x08, 0x08, 0x88, 0x70, 0x00, 0x00, 
		//four: 52
		0x00, 0x00, 0x08, 0x18, 0x28, 0x48, 0x88, 0xF8, 0x08, 0x08, 0x00, 0x00, 
		//five: 53
		0x00, 0x00, 0xF8, 0x80, 0x80, 0xF0, 0x08, 0x08, 0x88, 0x70, 0x00, 0x00, 
		//six: 54
		0x00, 0x00, 0x70, 0x80, 0x80, 0xF0, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//seven: 55
		0x00, 0x00, 0xF8, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//eight: 56
		0x00, 0x00, 0x70, 0x88, 0x88, 0x70, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//nine: 57
		0x00, 0x00, 0x70, 0x88, 0x88, 0x88, 0x78, 0x08, 0x08, 0x70, 0x00, 0x00, 
		//colon: 58
		0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 
		//semicolon: 59
		0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x20, 0x20, 0x40, 0x00, 
		//less: 60
		0x00, 0x00, 0x00, 0x08, 0x10, 0x20, 0x40, 0x20, 0x10, 0x08, 0x00, 0x00, 
		//equal: 61
		0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 
		//greater: 62
		0x00, 0x00, 0x00, 0x40, 0x20, 0x10, 0x08, 0x10, 0x20, 0x40, 0x00, 0x00, 
		//question: 63
		0x00, 0x00, 0x70, 0x88, 0x88, 0x10, 0x20, 0x00, 0x20, 0x20, 0x00, 0x00, 
		//at: 64
		0x00, 0x00, 0x70, 0x88, 0x98, 0xA8, 0xA8, 0x98, 0x80, 0x78, 0x00, 0x00, 
		//A: 65
		0x00, 0x00, 0x70, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//B: 66
		0x00, 0x00, 0xF0, 0x88, 0x88, 0xF0, 0x88, 0x88, 0x88, 0xF0, 0x00, 0x00, 
		//C: 67
		0x00, 0x00, 0x70, 0x88, 0x80, 0x80, 0x80, 0x80, 0x88, 0x70, 0x00, 0x00, 
		//D: 68
		0x00, 0x00, 0xE0, 0x90, 0x88, 0x88, 0x88, 0x88, 0x90, 0xE0, 0x00, 0x00, 
		//E: 69
		0x00, 0x00, 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 
		//F: 70
		0x00, 0x00, 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 
		//G: 71
		0x00, 0x00, 0x70, 0x88, 0x80, 0x80, 0xB8, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//H: 72
		0x00, 0x00, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//I: 73
		0x00, 0x00, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//J: 74
		0x00, 0x00, 0x38, 0x10, 0x10, 0x10, 0x10, 0x90, 0x90, 0x60, 0x00, 0x00, 
		//K: 75
		0x00, 0x00, 0x88, 0x90, 0xA0, 0xC0, 0xC0, 0xA0, 0x90, 0x88, 0x00, 0x00, 
		//L: 76
		0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 
		//M: 77
		0x00, 0x00, 0x88, 0xD8, 0xA8, 0xA8, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//N: 78
		0x00, 0x00, 0x88, 0x88, 0xC8, 0xA8, 0x98, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//O: 79
		0x00, 0x00, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//P: 80
		0x00, 0x00, 0xF0, 0x88, 0x88, 0x88, 0xF0, 0x80, 0x80, 0x80, 0x00, 0x00, 
		//Q: 81
		0x00, 0x00, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0xA8, 0x70, 0x08, 0x00, 
		//R: 82
		0x00, 0x00, 0xF0, 0x88, 0x88, 0x88, 0xF0, 0xA0, 0x90, 0x88, 0x00, 0x00, 
		//S: 83
		0x00, 0x00, 0x70, 0x88, 0x80, 0x70, 0x08, 0x08, 0x88, 0x70, 0x00, 0x00, 
		//T: 84
		0x00, 0x00, 0xF8, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//U: 85
		0x00, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//V: 86
		0x00, 0x00, 0x88, 0x88, 0x88, 0x50, 0x50, 0x50, 0x20, 0x20, 0x00, 0x00, 
		//W: 87
		0x00, 0x00, 0x88, 0x88, 0x88, 0x88, 0xA8, 0xA8, 0xD8, 0x88, 0x00, 0x00, 
		//X: 88
		0x00, 0x00, 0x88, 0x88, 0x50, 0x20, 0x20, 0x50, 0x88, 0x88, 0x00, 0x00, 
		//Y: 89
		0x00, 0x00, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//Z: 90
		0x00, 0x00, 0xF8, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0xF8, 0x00, 0x00, 
		//bracketleft: 91
		0x00, 0x00, 0x70, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x70, 0x00, 0x00, 
		//backslash: 92
		0x00, 0x00, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x00, 0x00, 
		//bracketright: 93
		0x00, 0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x70, 0x00, 0x00, 
		//asciicircum: 94
		0x00, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//underscore: 95
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 
		//grave: 96
		0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//a: 97
		0x00, 0x00, 0x00, 0x00, 0x70, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//b: 98
		0x00, 0x00, 0x80, 0x80, 0xF0, 0x88, 0x88, 0x88, 0x88, 0xF0, 0x00, 0x00, 
		//c: 99
		0x00, 0x00, 0x00, 0x00, 0x70, 0x88, 0x80, 0x80, 0x88, 0x70, 0x00, 0x00, 
		//d: 100
		0x00, 0x00, 0x08, 0x08, 0x78, 0x88, 0x88, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//e: 101
		0x00, 0x00, 0x00, 0x00, 0x70, 0x88, 0xF8, 0x80, 0x88, 0x70, 0x00, 0x00, 
		//f: 102
		0x00, 0x00, 0x18, 0x20, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//g: 103
		0x00, 0x00, 0x00, 0x00, 0x78, 0x88, 0x88, 0x88, 0x88, 0x78, 0x08, 0x70, 
		//h: 104
		0x00, 0x00, 0x80, 0x80, 0xF0, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//i: 105
		0x00, 0x20, 0x20, 0x00, 0x60, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//j: 106
		0x00, 0x08, 0x08, 0x00, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x48, 0x30, 
		//k: 107
		0x00, 0x00, 0x40, 0x40, 0x48, 0x50, 0x60, 0x60, 0x50, 0x48, 0x00, 0x00, 
		//l: 108
		0x00, 0x00, 0x60, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//m: 109
		0x00, 0x00, 0x00, 0x00, 0xF0, 0xA8, 0xA8, 0xA8, 0xA8, 0xA8, 0x00, 0x00, 
		//n: 110
		0x00, 0x00, 0x00, 0x00, 0xF0, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//o: 111
		0x00, 0x00, 0x00, 0x00, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//p: 112
		0x00, 0x00, 0x00, 0x00, 0xF0, 0x88, 0x88, 0x88, 0x88, 0xF0, 0x80, 0x80, 
		//q: 113
		0x00, 0x00, 0x00, 0x00, 0x78, 0x88, 0x88, 0x88, 0x88, 0x78, 0x08, 0x08, 
		//r: 114
		0x00, 0x00, 0x00, 0x00, 0xB8, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 
		//s: 115
		0x00, 0x00, 0x00, 0x00, 0x78, 0x80, 0x70, 0x08, 0x08, 0xF0, 0x00, 0x00, 
		//t: 116
		0x00, 0x00, 0x20, 0x20, 0x70, 0x20, 0x20, 0x20, 0x20, 0x18, 0x00, 0x00, 
		//u: 117
		0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//v: 118
		0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x00, 0x00, 
		//w: 119
		0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0xA8, 0xA8, 0xA8, 0x70, 0x00, 0x00, 
		//x: 120
		0x00, 0x00, 0x00, 0x00, 0x88, 0x50, 0x20, 0x20, 0x50, 0x88, 0x00, 0x00, 
		//y: 121
		0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x08, 0x70, 
		//z: 122
		0x00, 0x00, 0x00, 0x00, 0xF8, 0x10, 0x20, 0x40, 0x80, 0xF8, 0x00, 0x00, 
		//braceleft: 123
		0x00, 0x00, 0x18, 0x20, 0x20, 0x40, 0x20, 0x20, 0x20, 0x18, 0x00, 0x00, 
		//bar: 124
		0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//braceright: 125
		0x00, 0x00, 0x60, 0x10, 0x10, 0x08, 0x10, 0x10, 0x10, 0x60, 0x00, 0x00, 
		//asciitilde: 126
		0x00, 0x48, 0xA8, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//nbspace: 160
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//exclamdown: 161
		0x00, 0x00, 0x20, 0x20, 0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//cent: 162
		0x00, 0x00, 0x00, 0x20, 0x70, 0xA8, 0xA0, 0xA0, 0xA8, 0x70, 0x20, 0x00, 
		//sterling: 163
		0x00, 0x00, 0x30, 0x48, 0x40, 0xF0, 0x40, 0x40, 0x48, 0xF8, 0x00, 0x00, 
		//currency: 164
		0x00, 0x00, 0x00, 0x48, 0x30, 0x48, 0x48, 0x30, 0x48, 0x00, 0x00, 0x00, 
		//yen: 165
		0x00, 0x00, 0x88, 0x88, 0x50, 0x20, 0x70, 0x20, 0x70, 0x20, 0x00, 0x00, 
		//brokenbar: 166
		0x00, 0x00, 0x20, 0x20, 0x20, 0x00, 0x00, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//section: 167
		0x00, 0x30, 0x48, 0x20, 0x50, 0x48, 0x28, 0x10, 0x48, 0x30, 0x00, 0x00, 
		//dieresis: 168
		0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//copyright: 169
		0x00, 0x00, 0x78, 0x84, 0xB4, 0xA4, 0xA4, 0xB4, 0x84, 0x78, 0x00, 0x00, 
		//ordfeminine: 170
		0x30, 0x08, 0x38, 0x48, 0x38, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//guillemotleft: 171
		0x00, 0x00, 0x00, 0x14, 0x28, 0x50, 0xA0, 0x50, 0x28, 0x14, 0x00, 0x00, 
		//logicalnot: 172
		0x00, 0x00, 0x00, 0x00, 0xF8, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 
		//softhyphen: 173
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//registered: 174
		0x00, 0x00, 0x78, 0x84, 0xB4, 0xAC, 0xB4, 0xAC, 0x84, 0x78, 0x00, 0x00, 
		//macron: 175
		0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//degree: 176
		0x00, 0x20, 0x50, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//plusminus: 177
		0x00, 0x00, 0x00, 0x20, 0x20, 0xF8, 0x20, 0x20, 0x00, 0xF8, 0x00, 0x00, 
		//twosuperior: 178
		0x00, 0x30, 0x48, 0x10, 0x20, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//threesuperior: 179
		0x00, 0x70, 0x08, 0x30, 0x08, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//acute: 180
		0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//mu: 181
		0x00, 0x00, 0x00, 0x00, 0x88, 0x88, 0x88, 0x88, 0x98, 0xE8, 0x80, 0x80, 
		//paragraph: 182
		0x00, 0x00, 0x78, 0xA8, 0xA8, 0xA8, 0x68, 0x28, 0x28, 0x28, 0x00, 0x00, 
		//periodcentered: 183
		0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//cedilla: 184
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x40, 
		//onesuperior: 185
		0x00, 0x20, 0x60, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//ordmasculine: 186
		0x30, 0x48, 0x48, 0x48, 0x30, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//guillemotright: 187
		0x00, 0x00, 0x00, 0xA0, 0x50, 0x28, 0x14, 0x28, 0x50, 0xA0, 0x00, 0x00, 
		//onequarter: 188
		0x40, 0xC0, 0x40, 0x48, 0x10, 0x20, 0x48, 0x98, 0x28, 0x78, 0x08, 0x08, 
		//onehalf: 189
		0x40, 0xC0, 0x44, 0x48, 0x10, 0x20, 0x40, 0x98, 0x24, 0x08, 0x10, 0x3C, 
		//threequarters: 190
		0xC0, 0x20, 0xC0, 0x24, 0xC8, 0x10, 0x24, 0x4C, 0x94, 0x3C, 0x04, 0x04, 
		//questiondown: 191
		0x00, 0x00, 0x20, 0x20, 0x00, 0x20, 0x40, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Agrave: 192
		0x40, 0x20, 0x70, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//Aacute: 193
		0x10, 0x20, 0x70, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//Acircumflex: 194
		0x20, 0x50, 0x70, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//Atilde: 195
		0x28, 0x50, 0x70, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//Adieresis: 196
		0x50, 0x50, 0x70, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//Aring: 197
		0x20, 0x50, 0x70, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//AE: 198
		0x00, 0x00, 0x7C, 0x90, 0x90, 0xFC, 0x90, 0x90, 0x90, 0x9C, 0x00, 0x00, 
		//Ccedilla: 199
		0x00, 0x00, 0x70, 0x88, 0x80, 0x80, 0x80, 0x80, 0x88, 0x70, 0x20, 0x40, 
		//Egrave: 200
		0x40, 0x20, 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 
		//Eacute: 201
		0x10, 0x20, 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 
		//Ecircumflex: 202
		0x20, 0x50, 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 
		//Edieresis: 203
		0x50, 0x50, 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0xF8, 0x00, 0x00, 
		//Igrave: 204
		0x40, 0x20, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//Iacute: 205
		0x10, 0x20, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//Icircumflex: 206
		0x20, 0x50, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//Idieresis: 207
		0x50, 0x50, 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//Eth: 208
		0x00, 0x00, 0xE0, 0x90, 0x88, 0xE8, 0x88, 0x88, 0x90, 0xE0, 0x00, 0x00, 
		//Ntilde: 209
		0x28, 0x50, 0x88, 0x88, 0xC8, 0xA8, 0x98, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//Ograve: 210
		0x40, 0x20, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Oacute: 211
		0x10, 0x20, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Ocircumflex: 212
		0x20, 0x50, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Otilde: 213
		0x28, 0x50, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Odieresis: 214
		0x50, 0x50, 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//multiply: 215
		0x00, 0x00, 0x00, 0x00, 0x88, 0x50, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 
		//Oslash: 216
		0x00, 0x00, 0x74, 0x88, 0x98, 0xA8, 0xC8, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Ugrave: 217
		0x40, 0x20, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Uacute: 218
		0x10, 0x20, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Ucircumflex: 219
		0x20, 0x50, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Udieresis: 220
		0x50, 0x50, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//Yacute: 221
		0x10, 0x20, 0x88, 0x88, 0x50, 0x50, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 
		//Thorn: 222
		0x00, 0x00, 0x80, 0xF0, 0x88, 0x88, 0x88, 0xF0, 0x80, 0x80, 0x00, 0x00, 
		//germandbls: 223
		0x00, 0x00, 0xE0, 0x90, 0x90, 0xF0, 0x88, 0x88, 0xC8, 0xB0, 0x00, 0x00, 
		//agrave: 224
		0x00, 0x00, 0x40, 0x20, 0x70, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//aacute: 225
		0x00, 0x00, 0x10, 0x20, 0x70, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//acircumflex: 226
		0x00, 0x00, 0x20, 0x50, 0x70, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//atilde: 227
		0x00, 0x00, 0x28, 0x50, 0x70, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//adieresis: 228
		0x00, 0x00, 0x50, 0x50, 0x70, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//aring: 229
		0x00, 0x00, 0x20, 0x50, 0x70, 0x08, 0x78, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//ae: 230
		0x00, 0x00, 0x00, 0x00, 0x70, 0x28, 0x68, 0xB0, 0xA0, 0x78, 0x00, 0x00, 
		//ccedilla: 231
		0x00, 0x00, 0x00, 0x00, 0x70, 0x88, 0x80, 0x80, 0x88, 0x70, 0x20, 0x40, 
		//egrave: 232
		0x00, 0x00, 0x40, 0x20, 0x70, 0x88, 0xF8, 0x80, 0x88, 0x70, 0x00, 0x00, 
		//eacute: 233
		0x00, 0x00, 0x10, 0x20, 0x70, 0x88, 0xF8, 0x80, 0x88, 0x70, 0x00, 0x00, 
		//ecircumflex: 234
		0x00, 0x00, 0x20, 0x50, 0x70, 0x88, 0xF8, 0x80, 0x88, 0x70, 0x00, 0x00, 
		//edieresis: 235
		0x00, 0x00, 0x50, 0x50, 0x70, 0x88, 0xF8, 0x80, 0x88, 0x70, 0x00, 0x00, 
		//igrave: 236
		0x00, 0x00, 0x40, 0x20, 0x60, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//iacute: 237
		0x00, 0x00, 0x10, 0x20, 0x60, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//icircumflex: 238
		0x00, 0x00, 0x20, 0x50, 0x60, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//idieresis: 239
		0x00, 0x00, 0x50, 0x50, 0x60, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00, 0x00, 
		//eth: 240
		0x00, 0xA0, 0x40, 0xA0, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//ntilde: 241
		0x00, 0x00, 0x28, 0x50, 0xF0, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 
		//ograve: 242
		0x00, 0x00, 0x40, 0x20, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//oacute: 243
		0x00, 0x00, 0x10, 0x20, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//ocircumflex: 244
		0x00, 0x00, 0x20, 0x50, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//otilde: 245
		0x00, 0x00, 0x28, 0x50, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//odieresis: 246
		0x00, 0x00, 0x50, 0x50, 0x70, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 
		//divide: 247
		0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0xF8, 0x00, 0x20, 0x20, 0x00, 0x00, 
		//oslash: 248
		0x00, 0x00, 0x00, 0x00, 0x34, 0x48, 0x58, 0x68, 0x48, 0xB0, 0x00, 0x00, 
		//ugrave: 249
		0x00, 0x00, 0x40, 0x20, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//uacute: 250
		0x00, 0x00, 0x10, 0x20, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//ucircumflex: 251
		0x00, 0x00, 0x20, 0x50, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//udieresis: 252
		0x00, 0x00, 0x50, 0x50, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x00, 0x00, 
		//yacute: 253
		0x00, 0x00, 0x10, 0x20, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x08, 0x70, 
		//thorn: 254
		0x00, 0x00, 0x80, 0x80, 0xF0, 0x88, 0x88, 0x88, 0x88, 0xF0, 0x80, 0x80, 
		//ydieresis: 255
		0x00, 0x00, 0x50, 0x50, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x08, 0x70,
	}
};
#endif
