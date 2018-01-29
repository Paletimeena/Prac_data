#!/usr/bin/pyhton

import math
from collections import Counter

num=input("enter the input : \n")
digit=1
flag=1
while(flag):

	def get_fact(digit):
		
		fact= math.factorial(digit)
		print fact
		return fact
	def get_Trailing_Zeros(fact):
	
		num_lst=list(str(fact))
		for i in range(0,len(num_lst)+1):
			new_lst=num_lst[i:num]
			print new_lst
			zeros=new_lst.count('0')
			print "Zeros ",zeros
			return zeros

	fact=get_fact(digit)
	num_zeros=get_Trailing_Zeros(fact)
	if(num_zeros == num):
		print "{}!={}".format(digit,fact)
		flag=0
		break;
	else:
		print "{}!".format(digit)
	
	digit = digit + 1

