#!/usr/bin/python
while True:
	mystring=raw_input("please enter somthing:")
	if mystring=="quit":
		break;
	if len(mystring)<3:
		print"Too small"
		continue
	print"Please enter onther string"
	print"Length of the string is",len(mystring)
print"Done"
