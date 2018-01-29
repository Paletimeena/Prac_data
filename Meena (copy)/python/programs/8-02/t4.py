x="1010"
y="10100"
j=len(y)-1
k=len(x)-1
count=0
i=1
while(i==1):
	if  (cmp(y[j],x[k])):
		count+=1
	j-=1
	k-=1
	
	if(j<0):
		i==0
		print"end of while loop", 

print count			
