#print indual elements of z
z={'x':[0,1,2],'y':{'k1':'v1'}}
print z,'z values '
print z.keys(),'keys'
print z.values(),'values'
print z.items(),'items'
print z.has_key(0)
print z.get('x')
print z.get('y')
count=0
while count<len(z.keys()):
    	print [z.values()[count]]
    	count+=1
	z.clear()
print z

