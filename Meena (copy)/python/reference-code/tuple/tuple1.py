#!/usr/bin/python

tuple1 = ("RAHUL",839,73.40,"FIRST",72.40)
tuple2 = (1000,"Raj")

print "Tuple one is ",tuple1
print "First element of tuple one is ",tuple1[0]
print "Element of tuple one is ",tuple1[1:4]
print "Element of tuple one is ",tuple1[:3]
print "Element of tuple one is ",tuple1[2:]
res = tuple2 * 4
print res
res = tuple1 + tuple2
print res
tuple1 = "VTECH",tuple1[1:]
#tuple1[5] = "VTECH,HYD"
print "Element of tuple one is ",tuple1

