#!/usr/bin/python



def prime_or_not(num):
	
	flag=0
	n=(num/2)+1
	for i in range(2,n):
		if(num % i == 0):
			flag=1
			break;
	if(flag == 1):
		print "{} is not prime number".format(num)
	else:
		print "{} is  a prime number".format(num)


def lst_of_primes(start,end):
	ls=[]
	for num in range (start,end+1):	
		flag=0
		n=(num/2)+1
		for i in range(2,n):
			if(num % i == 0):
				flag=1
				break;
		if(flag != 1):
			#rint "{} is not prime number".format(num)
			ls.append(num)
	return ls	



def tuple_of_primes(start,end):
	ls=[]
	for num in range (start,end+1):	
		flag=0
		n=(num/2)+1
		for i in range(2,n):
			if(num % i == 0):
				flag=1
				break;
		if(flag != 1):
			#rint "{} is not prime number".format(num)
			ls.append(num)
	return tuple(ls)	
"""
num=10
prime_or_not(2)
ls=lst_of_primes(2,100)
#print ls
for val in ls:
	print val,
Ts=tuple_of_primes(2,100)
print ""
for val in ls:
	print val,

"""


