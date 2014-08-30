/*
	bdf2hpp - Extract data from bitmap font to header format
	Command: ./bdf2hpp.py -f fonts/ter-u16b.bdf -n Font16b
	ter-u16b
	-xos4-Terminus-Bold-R-Normal--16-160-72-72-C-80-ISO10646-1
	Copyright (C) 2014 Dimitar Toshkov Zhekov
	Licensed under the SIL Open Font License, Version 1.1
*/
#ifndef FONT16B_HPP
#define FONT16B_HPP
static const Font Font16b
{
	8,
	16,
	1,
	{
		//space: 32
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//exclam: 33
		0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//quotedbl: 34
		0x00, 0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//numbersign: 35
		0x00, 0x00, 0x6C, 0x6C, 0x6C, 0xFE, 0x6C, 0x6C, 0xFE, 0x6C, 0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 
		//dollar: 36
		0x00, 0x10, 0x10, 0x7C, 0xD6, 0xD0, 0xD0, 0x7C, 0x16, 0x16, 0xD6, 0x7C, 0x10, 0x10, 0x00, 0x00, 
		//percent: 37
		0x00, 0x00, 0x66, 0xD6, 0x6C, 0x0C, 0x18, 0x18, 0x30, 0x36, 0x6B, 0x66, 0x00, 0x00, 0x00, 0x00, 
		//ampersand: 38
		0x00, 0x00, 0x38, 0x6C, 0x6C, 0x38, 0x76, 0xDC, 0xCC, 0xCC, 0xDC, 0x76, 0x00, 0x00, 0x00, 0x00, 
		//quotesingle: 39
		0x00, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//parenleft: 40
		0x00, 0x00, 0x0C, 0x18, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00, 0x00, 0x00, 0x00, 
		//parenright: 41
		0x00, 0x00, 0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 
		//asterisk: 42
		0x00, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x38, 0xFE, 0x38, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//plus: 43
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//comma: 44
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 
		//hyphen: 45
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//period: 46
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//slash: 47
		0x00, 0x00, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 
		//zero: 48
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xCE, 0xDE, 0xF6, 0xE6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//one: 49
		0x00, 0x00, 0x18, 0x38, 0x78, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//two: 50
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//three: 51
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0x06, 0x3C, 0x06, 0x06, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//four: 52
		0x00, 0x00, 0x06, 0x0E, 0x1E, 0x36, 0x66, 0xC6, 0xFE, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 
		//five: 53
		0x00, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xFC, 0x06, 0x06, 0x06, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//six: 54
		0x00, 0x00, 0x3C, 0x60, 0xC0, 0xC0, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//seven: 55
		0x00, 0x00, 0xFE, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 
		//eight: 56
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//nine: 57
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x06, 0x0C, 0x78, 0x00, 0x00, 0x00, 0x00, 
		//colon: 58
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//semicolon: 59
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 0x00, 0x00, 0x00, 
		//less: 60
		0x00, 0x00, 0x00, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00, 
		//equal: 61
		0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//greater: 62
		0x00, 0x00, 0x00, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 
		//question: 63
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0x0C, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//at: 64
		0x00, 0x00, 0x7C, 0xC6, 0xCE, 0xD6, 0xD6, 0xD6, 0xD6, 0xCE, 0xC0, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//A: 65
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//B: 66
		0x00, 0x00, 0xFC, 0xC6, 0xC6, 0xC6, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xFC, 0x00, 0x00, 0x00, 0x00, 
		//C: 67
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC0, 0xC0, 0xC0, 0xC0, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//D: 68
		0x00, 0x00, 0xF8, 0xCC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xCC, 0xF8, 0x00, 0x00, 0x00, 0x00, 
		//E: 69
		0x00, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//F: 70
		0x00, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 
		//G: 71
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC0, 0xC0, 0xDE, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//H: 72
		0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//I: 73
		0x00, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//J: 74
		0x00, 0x00, 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xCC, 0xCC, 0x78, 0x00, 0x00, 0x00, 0x00, 
		//K: 75
		0x00, 0x00, 0xC6, 0xC6, 0xCC, 0xD8, 0xF0, 0xF0, 0xD8, 0xCC, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//L: 76
		0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//M: 77
		0x00, 0x00, 0x82, 0xC6, 0xEE, 0xFE, 0xD6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//N: 78
		0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//O: 79
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//P: 80
		0x00, 0x00, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xFC, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 
		//Q: 81
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xDE, 0x7C, 0x06, 0x00, 0x00, 0x00, 
		//R: 82
		0x00, 0x00, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xFC, 0xF0, 0xD8, 0xCC, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//S: 83
		0x00, 0x00, 0x7C, 0xC6, 0xC0, 0xC0, 0x7C, 0x06, 0x06, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//T: 84
		0x00, 0x00, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//U: 85
		0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//V: 86
		0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x6C, 0x6C, 0x6C, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 
		//W: 87
		0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xD6, 0xFE, 0xEE, 0xC6, 0x82, 0x00, 0x00, 0x00, 0x00, 
		//X: 88
		0x00, 0x00, 0xC6, 0xC6, 0x6C, 0x6C, 0x38, 0x38, 0x6C, 0x6C, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//Y: 89
		0x00, 0x00, 0xC3, 0xC3, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//Z: 90
		0x00, 0x00, 0xFE, 0x06, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//bracketleft: 91
		0x00, 0x00, 0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//backslash: 92
		0x00, 0x00, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0C, 0x0C, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 
		//bracketright: 93
		0x00, 0x00, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//asciicircum: 94
		0x00, 0x18, 0x3C, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//underscore: 95
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 
		//grave: 96
		0x30, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//a: 97
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//b: 98
		0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xFC, 0x00, 0x00, 0x00, 0x00, 
		//c: 99
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC0, 0xC0, 0xC0, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//d: 100
		0x00, 0x00, 0x06, 0x06, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//e: 101
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xFE, 0xC0, 0xC0, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//f: 102
		0x00, 0x00, 0x1E, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 
		//g: 103
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x06, 0x7C, 0x00, 
		//h: 104
		0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//i: 105
		0x00, 0x00, 0x18, 0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//j: 106
		0x00, 0x00, 0x06, 0x06, 0x00, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x66, 0x66, 0x3C, 0x00, 
		//k: 107
		0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC6, 0xCC, 0xD8, 0xF0, 0xD8, 0xCC, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//l: 108
		0x00, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//m: 109
		0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0xD6, 0x00, 0x00, 0x00, 0x00, 
		//n: 110
		0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//o: 111
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//p: 112
		0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xFC, 0xC0, 0xC0, 0xC0, 0x00, 
		//q: 113
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x06, 0x06, 0x00, 
		//r: 114
		0x00, 0x00, 0x00, 0x00, 0x00, 0xDE, 0xF0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 
		//s: 115
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0xC0, 0xC0, 0x7C, 0x06, 0x06, 0xFC, 0x00, 0x00, 0x00, 0x00, 
		//t: 116
		0x00, 0x00, 0x30, 0x30, 0x30, 0xFC, 0x30, 0x30, 0x30, 0x30, 0x30, 0x1E, 0x00, 0x00, 0x00, 0x00, 
		//u: 117
		0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//v: 118
		0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0x6C, 0x6C, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 
		//w: 119
		0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xD6, 0xD6, 0xD6, 0xD6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//x: 120
		0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0x6C, 0x38, 0x6C, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//y: 121
		0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x06, 0x7C, 0x00, 
		//z: 122
		0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//braceleft: 123
		0x00, 0x00, 0x1C, 0x30, 0x30, 0x30, 0x60, 0x30, 0x30, 0x30, 0x30, 0x1C, 0x00, 0x00, 0x00, 0x00, 
		//bar: 124
		0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//braceright: 125
		0x00, 0x00, 0x70, 0x18, 0x18, 0x18, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x70, 0x00, 0x00, 0x00, 0x00, 
		//asciitilde: 126
		0x00, 0x73, 0xDB, 0xCE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//nbspace: 160
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//exclamdown: 161
		0x00, 0x00, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//cent: 162
		0x00, 0x00, 0x00, 0x10, 0x10, 0x7C, 0xD6, 0xD0, 0xD0, 0xD0, 0xD6, 0x7C, 0x10, 0x10, 0x00, 0x00, 
		//sterling: 163
		0x00, 0x00, 0x38, 0x6C, 0x60, 0x60, 0xF8, 0x60, 0x60, 0x60, 0x66, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//currency: 164
		0x00, 0x00, 0x00, 0x00, 0x66, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//yen: 165
		0x00, 0x00, 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x7E, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//brokenbar: 166
		0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//section: 167
		0x00, 0x3C, 0x66, 0x60, 0x38, 0x6C, 0x66, 0x66, 0x36, 0x1C, 0x06, 0x66, 0x3C, 0x00, 0x00, 0x00, 
		//dieresis: 168
		0x6C, 0x6C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//copyright: 169
		0x00, 0x00, 0x00, 0x7E, 0x81, 0x99, 0xA5, 0xA1, 0xA5, 0x99, 0x81, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//ordfeminine: 170
		0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//guillemotleft: 171
		0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x36, 0x6C, 0xD8, 0x6C, 0x36, 0x1B, 0x00, 0x00, 0x00, 0x00, 
		//logicalnot: 172
		0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//softhyphen: 173
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//registered: 174
		0x00, 0x00, 0x00, 0x7E, 0x81, 0xB9, 0xA5, 0xB9, 0xA9, 0xA5, 0x81, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//macron: 175
		0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//degree: 176
		0x00, 0x38, 0x6C, 0x6C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//plusminus: 177
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//twosuperior: 178
		0x00, 0x38, 0x6C, 0x18, 0x30, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//threesuperior: 179
		0x00, 0x78, 0x0C, 0x38, 0x0C, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//acute: 180
		0x18, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//mu: 181
		0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xCE, 0xF6, 0xC0, 0xC0, 0xC0, 0x00, 
		//paragraph: 182
		0x00, 0x00, 0x7E, 0xD6, 0xD6, 0xD6, 0xD6, 0x76, 0x16, 0x16, 0x16, 0x16, 0x00, 0x00, 0x00, 0x00, 
		//periodcentered: 183
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//cedilla: 184
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x60, 0x00, 
		//onesuperior: 185
		0x00, 0x18, 0x38, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//ordmasculine: 186
		0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//guillemotright: 187
		0x00, 0x00, 0x00, 0x00, 0x00, 0xD8, 0x6C, 0x36, 0x1B, 0x36, 0x6C, 0xD8, 0x00, 0x00, 0x00, 0x00, 
		//onequarter: 188
		0x00, 0x60, 0xE0, 0x62, 0x66, 0x6C, 0x18, 0x30, 0x66, 0xCE, 0x9A, 0x3E, 0x06, 0x06, 0x00, 0x00, 
		//onehalf: 189
		0x00, 0x60, 0xE0, 0x62, 0x66, 0x6C, 0x18, 0x30, 0x60, 0xDC, 0xB6, 0x0C, 0x18, 0x3E, 0x00, 0x00, 
		//threequarters: 190
		0x00, 0xE0, 0x30, 0x62, 0x36, 0xEC, 0x18, 0x30, 0x66, 0xCE, 0x9A, 0x3E, 0x06, 0x06, 0x00, 0x00, 
		//questiondown: 191
		0x00, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x60, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Agrave: 192
		0x30, 0x18, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//Aacute: 193
		0x18, 0x30, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//Acircumflex: 194
		0x38, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//Atilde: 195
		0x76, 0xDC, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//Adieresis: 196
		0x6C, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//Aring: 197
		0x38, 0x6C, 0x38, 0x7C, 0xC6, 0xC6, 0xC6, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//AE: 198
		0x00, 0x00, 0x7E, 0xD8, 0xD8, 0xD8, 0xFE, 0xD8, 0xD8, 0xD8, 0xD8, 0xDE, 0x00, 0x00, 0x00, 0x00, 
		//Ccedilla: 199
		0x00, 0x00, 0x7C, 0xC6, 0xC6, 0xC0, 0xC0, 0xC0, 0xC0, 0xC6, 0xC6, 0x7C, 0x30, 0x30, 0x60, 0x00, 
		//Egrave: 200
		0x30, 0x18, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//Eacute: 201
		0x18, 0x30, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//Ecircumflex: 202
		0x38, 0x6C, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//Edieresis: 203
		0x6C, 0x6C, 0x00, 0xFE, 0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x00, 
		//Igrave: 204
		0x30, 0x18, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//Iacute: 205
		0x0C, 0x18, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//Icircumflex: 206
		0x38, 0x6C, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//Idieresis: 207
		0x66, 0x66, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//Eth: 208
		0x00, 0x00, 0x78, 0x6C, 0x66, 0x66, 0xF6, 0x66, 0x66, 0x66, 0x6C, 0x78, 0x00, 0x00, 0x00, 0x00, 
		//Ntilde: 209
		0x76, 0xDC, 0x00, 0xC6, 0xC6, 0xE6, 0xF6, 0xDE, 0xCE, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//Ograve: 210
		0x30, 0x18, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Oacute: 211
		0x18, 0x30, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Ocircumflex: 212
		0x38, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Otilde: 213
		0x76, 0xDC, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Odieresis: 214
		0x6C, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//multiply: 215
		0x00, 0x00, 0x00, 0x00, 0x00, 0xC6, 0x6C, 0x38, 0x38, 0x6C, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//Oslash: 216
		0x00, 0x00, 0x7C, 0xC7, 0xC6, 0xCE, 0xDE, 0xF6, 0xE6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Ugrave: 217
		0x30, 0x18, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Uacute: 218
		0x18, 0x30, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Ucircumflex: 219
		0x38, 0x6C, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Udieresis: 220
		0x6C, 0x6C, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//Yacute: 221
		0x0C, 0x18, 0xC3, 0xC3, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 
		//Thorn: 222
		0x00, 0x00, 0xC0, 0xC0, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xFC, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 
		//germandbls: 223
		0x00, 0x00, 0x78, 0xCC, 0xCC, 0xC8, 0xFC, 0xC6, 0xC6, 0xC6, 0xE6, 0xDC, 0x00, 0x00, 0x00, 0x00, 
		//agrave: 224
		0x00, 0x00, 0x30, 0x18, 0x00, 0x7C, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//aacute: 225
		0x00, 0x00, 0x18, 0x30, 0x00, 0x7C, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//acircumflex: 226
		0x00, 0x00, 0x38, 0x6C, 0x00, 0x7C, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//atilde: 227
		0x00, 0x00, 0x76, 0xDC, 0x00, 0x7C, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//adieresis: 228
		0x00, 0x00, 0x6C, 0x6C, 0x00, 0x7C, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//aring: 229
		0x00, 0x00, 0x38, 0x6C, 0x38, 0x7C, 0x06, 0x7E, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//ae: 230
		0x00, 0x00, 0x00, 0x00, 0x00, 0x6C, 0x16, 0x16, 0x7E, 0xD0, 0xD0, 0x6C, 0x00, 0x00, 0x00, 0x00, 
		//ccedilla: 231
		0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0xC6, 0xC0, 0xC0, 0xC0, 0xC6, 0x7C, 0x30, 0x30, 0x60, 0x00, 
		//egrave: 232
		0x00, 0x00, 0x30, 0x18, 0x00, 0x7C, 0xC6, 0xC6, 0xFE, 0xC0, 0xC0, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//eacute: 233
		0x00, 0x00, 0x18, 0x30, 0x00, 0x7C, 0xC6, 0xC6, 0xFE, 0xC0, 0xC0, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//ecircumflex: 234
		0x00, 0x00, 0x38, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xFE, 0xC0, 0xC0, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//edieresis: 235
		0x00, 0x00, 0x6C, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xFE, 0xC0, 0xC0, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//igrave: 236
		0x00, 0x00, 0x30, 0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//iacute: 237
		0x00, 0x00, 0x0C, 0x18, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//icircumflex: 238
		0x00, 0x00, 0x38, 0x6C, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//idieresis: 239
		0x00, 0x00, 0x6C, 0x6C, 0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00, 
		//eth: 240
		0x00, 0x00, 0x68, 0x30, 0x58, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//ntilde: 241
		0x00, 0x00, 0x76, 0xDC, 0x00, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x00, 0x00, 0x00, 0x00, 
		//ograve: 242
		0x00, 0x00, 0x30, 0x18, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//oacute: 243
		0x00, 0x00, 0x18, 0x30, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//ocircumflex: 244
		0x00, 0x00, 0x38, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//otilde: 245
		0x00, 0x00, 0x76, 0xDC, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//odieresis: 246
		0x00, 0x00, 0x6C, 0x6C, 0x00, 0x7C, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7C, 0x00, 0x00, 0x00, 0x00, 
		//divide: 247
		0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x7E, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
		//oslash: 248
		0x00, 0x00, 0x00, 0x00, 0x00, 0x3D, 0x67, 0x6E, 0x7E, 0x76, 0xE6, 0xBC, 0x00, 0x00, 0x00, 0x00, 
		//ugrave: 249
		0x00, 0x00, 0x30, 0x18, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//uacute: 250
		0x00, 0x00, 0x18, 0x30, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//ucircumflex: 251
		0x00, 0x00, 0x38, 0x6C, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//udieresis: 252
		0x00, 0x00, 0x6C, 0x6C, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x00, 0x00, 0x00, 0x00, 
		//yacute: 253
		0x00, 0x00, 0x18, 0x30, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x06, 0x7C, 0x00, 
		//thorn: 254
		0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xFC, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xFC, 0xC0, 0xC0, 0xC0, 0x00, 
		//ydieresis: 255
		0x00, 0x00, 0x6C, 0x6C, 0x00, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x7E, 0x06, 0x06, 0x7C, 0x00, 
	}
};
#endif