x=input("enter the number")
x=bin(x)
x=str(x)
print x
f1=x.index("1")
print f1,"first index"
x=x[f1+1::]
print "to find next one",x
f2=x.index("1")
z=f1+f2
print z,"second one index"
n=z-f1
print n,"total number of zeros"
