#total=0
'''
def mul(*val):
	total=0
	for i in  val:
		total += i
	print total

mul(1,2,3,4,5,6,7)
'''
def add(i,*val,**l):
	total=i
	for j in  val:
		total += j
	print total,"up to val"
	for m in l:
		total +=l[m]
	print total,"after key val"
add(1,2,3,4,5,6,7,8,v1=5,v2=5)
