#!/usr/bin/python
x=input("enter the number")
ls=[]
if x==0:
	print "do u want to quit`"
elif(x<0):
	print "please enter +ve values only"
elif(x<=3):
	print "there is no square no below 2"
else:		
	for i in range(4,x):
		for d in range(2,i):
			if(i%(d*d)==0):
				ls.append(i)
				
print "it is squae no",set(ls)	
					
			
			
	
