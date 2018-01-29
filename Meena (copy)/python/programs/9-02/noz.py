x="010010001000000001"
x="10100100000101"
x=list(x)
w=[]
p=[]
print x
lent=len(x)-1
try:
	for i in range(lent):
		y=x.index("1")
	#if(y<lent+1):
		x[y]='a'
		w.append(y)

#			break
except:
	print x
	print w
lent1=len(w)-1
res=0
for i in range(lent1):
#for j in w:
	w[i]=(w[i+1]-w[i])-1
w.pop(lent1)
print w
print max(w),"max no of zeros"
