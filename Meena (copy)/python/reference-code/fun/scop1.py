#!/usr/bin/python
total=0
def sum(arg1,arg2, total):
	total= arg1+arg2
	print "inside the function total is ",total
	return total
totalval = sum(10,20,total)
print "outside the function totalval is",totalval
print "inside the function total is ",total

