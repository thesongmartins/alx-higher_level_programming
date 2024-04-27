#!/usr/bin/python3

def uppercase(str):

	disp_str = ''

	for alp in str:
		if 'a' <= alp <= 'z':
			disp_str += chr(ord(alp) - 32)
		else:
			disp_str += alp
	print("{}".format(disp_str), end="\n")
