import math
num=10
c=0
value=1
while(c<num):
	c=0
	res=math.factorial(value)
#	print res
	temp = res
	while (temp !=0):
		z= temp%10
		if(z==0):
			c +=1
		temp = temp /10
	print value,"",res,"",c
		
#	c +=1
	value +=1
#	res=str(res)
#	temp=list(res)
print value-1
print res

#	print len(temp)
#	for i in range(len(temp)):
#		if temp[i]==0:
#			c +=1
#	value +=1
#print value
#	c=5
