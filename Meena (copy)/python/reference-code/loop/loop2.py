#!/usr/bin/python
#Basic program of for loop
mylist=[1,3,5,7,9]
for cntr in mylist:
	print cntr,
mytuple=(1,3,5,7,9)
for cntr in mytuple:
	print cntr,

print "Value in integer formate"
mylist=[1,3,5,7,9]
for cntr in mylist:
	print bin(cntr)
print "Value in float formate "
mylist=[1,3,5,7,9]
for cntr in mylist:
	print float(cntr)

