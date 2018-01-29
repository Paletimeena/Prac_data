#!/usr/bin/python
v1=50
global v1
def func():
	print "v1 is",v1 
	v1=2
	print "changed local v1 to ",v1
	return
func()
print "v1 stil is ",v1

