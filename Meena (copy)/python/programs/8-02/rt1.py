
def square(num1=1,num2=100):
	list1=[]
	global x
	for index in range(100+1):
		sqr=index**2
		
		if((sqr>=num1) and (sqr<=num2)):
			list1.append(sqr)
			x+=1
		if sqr>num2:
			break
	print list1


num1=input("enter the num1")
num2=input("enter the num2")
x=0
square(num1,num2)
#print list1
