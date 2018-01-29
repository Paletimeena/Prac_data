#!/usr/bin/python
x=50
def func(x):
	print "x is",x
	x=2
	print "changed local x to ",x
	return
func(x)
print "x stil is ",x

