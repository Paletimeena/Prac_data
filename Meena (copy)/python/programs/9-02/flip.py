def flip(x,y):
	c=0
	res=x^y
	res=('{:08b}'.format(res))
	for i in res:
		print i,"entered into check"
		if i=='1':
			c += 1
		
	print res,"rgr"
	print c,"place to be filped"







x=input("enter the num1")
y=input("enter the num2")
print "num1 is:",x
print "num2 is:",y
a=('{:08b}'.format(x))
b=('{:08b}'.format(y))
print "bin of num1:",a
print "bin of num2:",b
flip(x,y)

