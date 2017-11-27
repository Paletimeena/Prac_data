#!/usr/bin/perl


def valley(l):
	l1=[]
	l2=[]
	le =(len(l)+1)/2
	if len(l)/2 == 0:
		#print "even"
		
		l1 = l[:le]
		l2 = l[le:]
	else :
		#print "odd"
		l1 = l[:le]
		l2 = l[le-1:]

	#print l1
	#print l2
	val1=0
	val2 =0
	for i in range (len(l1)-1):
		
		if l1[i] > l1[i+1]:
			val1 =1
			#print l1[i],l1[i+1]
		else:
			val1 =0
	for j in range (len(l2)-1):
		
		if l2[i] < l2[i+1]:
			val2 =1
			#print l2[i],l2[i+1]
		else:
			val2 =0

	#print val1,val2
	if val1 & val2 :
		print "TRUE"
	else :
		print "FALSE"
	#lis[:le]

#lis=[3,2,1,2,3,5,6,7]
valley([3,2,1,2,3])
valley([3,2,1])
valley([5,4,3,2,1,2,3,4,5,4,3,2,1])