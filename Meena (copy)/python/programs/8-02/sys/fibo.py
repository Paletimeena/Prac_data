
def fib(totalnum):
	v1,v2=0,1
	while v2<totalnum:
		print v2,
		v1,v2=v2,v1+v2
	return
def fib2(totalnums):
	result=[]
	v1,v2=0,1
	while v2<totalnums:
		result.append(v2)
		v1,v2=v2,v1+v2
	return result
__version__='1.0'
#fib(5)
#fib2(5)
