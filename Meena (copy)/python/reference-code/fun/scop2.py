#!/usr/bin/python
global v1
v1=50
def func():
#	print "v1 is",v1 # throw the error
	v1=2
	print "changed local v1 to ",v1
	return
func()
print "v1 stil is ",v1

