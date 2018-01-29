#!/usr/bin/python
#Basic program of identity Operator(is and is not).
val1 = 20
val2 = 20
res = id(val1)
print "Identity is", res
res = id(val2)
print "Identity is", res

res = val1 is val2
print "val1 == val2", res

res = val1 is not val2
print "val1 != val2", res

val1 = 400
val2 = 400
res = id(val1)
print "Identity is", res
res = id(val2)
print "Identity is", res

res = (id(val1) == id(val2))
print "Identity of val1 and val2 is same", res

