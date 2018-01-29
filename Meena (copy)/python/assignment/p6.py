#!/usr/bin/python
total=1
for num in range(2,8):
#	print num
	for i in range(2,num/2):
		if num%i==0:
			break
	else:
		print num
		total*=num
print total
			
