#!/usr/bin/python
#Basic tset progam of tuple.

tup1 = ("Rahul","Aman","Rohit","RAj","Biru","Diru")
tup2 = (1,2,3,4,5,6)
print tup1
print tup2
print 
print "tup1[0] : ",tup1[0]
print "tup2[1:5] : ",tup2[1:5]

tup3= tup1 + tup2
print "Element in tuple3  after concanate is ",tup3
del tup3   # delete the tuple
print "Element in tuple3  after concanate is ",tup3
print "Thanks"

