#!/usr/bin/python
for num in range(10,20):
	limit = num/2
	for i in range(2,limit):
		rem = num%i
		if num%i==0:
			div=num/i
			print '%d equals %d * %d'%(num,i,div)
			break
	else:
		print num, "is a prime number"
