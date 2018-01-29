#!/usr/bin/python
import math
list=[]
start_num=input("enter the start number:")
end_num=input("enter end number:")
mul=1
for num1 in range(start_num,end_num+1):
    sqr=int(math.sqrt(num1))
    print "sqr of num1",num1," is",sqr
    for num2 in range(2,sqr+1):
        if((num1%num2)!=0):
            list.append(num1)
            mul*=num1
print "prime nos between ",start_num,"and ",end_num,"are",list,"and their product is:",mul

