import math
from math import sqrt
num1=input("enter the num1")
num2=input("enter the num2")
if(num1<0):
	raise ValueError()
if(num2<0):	
	raise ValueError()
if(num1>num2):
	raise ValueError()
l1=int(sqrt(num1))
l2=int(sqrt(num2))
print l1
print l2
for i in range(l1,l2+1):
	j=pow(i,2)
	if(j>num2):
		break
	elif j>=num1 :
		print j,"sqrt"
