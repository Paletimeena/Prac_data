def max_mul(arg,*tup):
	lis=lis(tup)
	max1=max(lis)
	for index in range(arg):
		if(max1==lis[index]):
			del lis[index]
			break
	max2=max(lis)
	print  max1*max2
max_mul(5,1,100,42,4,23)
