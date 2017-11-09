#!/usr/bin/python

dictionary=["i","like","sam","sung","samsung","mobile","ice","cream","and","icecream","man","go","mango"]
st=raw_input("enter the string\n")
#st="ilikeicecreamandmango"
#st="ilikesamsungmobile"
length=len(st)

newdic=[]

for word in dictionary:
	if word in st:
		newdic.append(word)
print newdic
num=[]
num2=[]
num3=[]
for ind in range(len(newdic)-2):

		if (newdic[ind]+newdic[ind+1]) == newdic[ind+2]:
			num.append(ind+2)

			num2.append(newdic[ind+2])
			num3.append(newdic[ind])
			num3.append(newdic[ind+1])


for n in num2:

	newdic.pop(newdic.index(n))
print newdic





			
			#print newdic[ind+1]
			#print ind+2
			#print newdic[ind+2]
			#print newdic.pop(ind+2)