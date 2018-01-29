import math
#def sum(x,y):#default arguments
   # print x,y
    #return x+y

#print sum(10,5)#required arguments
#sum(y=20,x=30)#key word arguments

def sum(*args):#variable length arguments
    total=0
    if len(args)>0:
        for arg in args:
            total+=arg
        print total

sum(10,20,30,40)

 

