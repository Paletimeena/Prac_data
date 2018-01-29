#!/usr/bin/python

def reverse(data):
	for index in range(len(data)-1,-1,-1):
		print index
		yield data[index]
		print "in reverse function"
for char in reverse(raw_input("enter the name")):
	print char



