#!/usr/bin/python
#Basic program of Membership Operator(in and not in).
list = [1,10,2,4,5]
name = ["RAHUL", "ROHIT", "RAJ","AMAN"]
val1 = 10
val2 = 20
res = val1 in list
print "Result is", res
res = val1 not in list
print "Result is", res

res = val2 in list
print "Result is", res
rses = val2 not in list

chekout = "RAHUL" in name
print "Result is", chekout

chekout = "rahul" not in name
print "Result is", chekout

chekout = "rAHUL" not in name
print "Result is", chekout

