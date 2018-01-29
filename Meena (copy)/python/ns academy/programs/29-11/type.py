#WAP to find the type of data type entered

x=raw_input("enter the variable")
print type(x)
if x.isdigit():
    print x,"is integer"
elif x.find('L')!=-1:
    print x,"is long"
elif x.find('.')!=-1:
    print x,"is float"
elif x.isalnum():
    print x,"is string"
    

