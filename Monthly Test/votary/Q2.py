#!/usr/bin/python

from collections import Counter

def getmaxminfer(lis):
	di= Counter(lis)
	print di
	max1= max(di.itervalues())
	min1=min(di.itervalues())
	#print max1
	#print min1
	lmax=[]
	lmin=[]
	for keys in di:

		if di[keys]== max1:
			lmax.append(keys)
	#print lmax
	for keys in di:

		if di[keys]== min1:
			lmin.append(keys)
	#print lmin

	lval=[]
	lval.append(lmin)
	lval.append(lmax)
	print lval

getmaxminfer( [13, 12, 11, 13, 14, 13, 7, 11, 13, 14, 12])
getmaxminfer([13, 12, 11, 13, 14, 13, 7, 11, 13, 14, 12, 14, 14])
getmaxminfer( [13, 12, 11, 13, 14, 13, 7, 11, 13, 14, 12, 14, 14, 7])