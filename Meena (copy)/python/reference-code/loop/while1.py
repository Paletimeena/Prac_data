#!/usr/bin/python
dividend=2
max_num=100
while(dividend<max_num):
	divisor=2
	limit= dividend/divisor
	
	rem=dividend%divisor
	if not(rem):
		break
	divisor=divisor+1
	if(divisor>dividend/divisor):
	print dividend,"is prime"
	dividend= dividend+1
print "Thanks"
 
