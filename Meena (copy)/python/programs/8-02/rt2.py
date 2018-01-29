def bit_diff(num1,num2):
	global count
	for index in range(len(num2)):
		rem1=val1%10
		rem2=val2%10
		if not(rem1==rem2):
			count=count+1

num1=raw_input("enter num1")
num2=raw_input("enter num2")
val1='{:08b}'.format(val1)
val1=bin(num1)
print val1,"before format"
print "aftert format",val1
bit_diff(val1,val2)
print val2,"before format val2"
val2=bin(num2)
print "the number of bits %d %d:,%d"%(num1,num2,count)
