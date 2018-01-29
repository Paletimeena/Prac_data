#!/usr/bin/python
lis = [1,2,3,4,5,6]
#lis.sort(reverse=True)
#print 'list sort method ',lis
#lis.sort(reverse=False)
#lis = [5,3,6,7,2,4]
newlst = sorted(lis)
print 'using sorted function',newlst
#print newlst[0:3]
lis1=newlst[0:3]
print lis1
p=len(lis)
q=len(lis1)
for i in range(p):
	for j in range(q):
		if (cmp(lis[i],lis1[j])):
			print lis[i]
			del lis[i]
			q-=1
			break

print "final lis",lis
'''
while(i>=3):
	print i
	print newlst[i],"to be popped"
	newlst.pop(newlst[i])
	print newlst,"after popping",newlst[i]
	i-=1
print newlst
	
	
for d in range(3,len(newlst)-1):
	print newlst[d],"element to popped"
	newlst.pop(newlst[d])
	print newlst[d],"element is popped"
print newlst

#for i in range(len(lis)):
#	for j in range(len(newlst)):
'''
'''
c = 0
small = min(lis)
ind = lis.index(small)
print ind,"index of small"
print small,"small"
n = len(lis)-5
#print n
for i in range(lis.index(small),len(lis)):
	print lis[i]
	c+=1
if(c==n):
	print small,lis[lis.index(small)+1]
'''
