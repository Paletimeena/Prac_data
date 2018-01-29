x=(raw_input("enter x value"))
y=(raw_input("enter y value"))
if x.isdigit() and y.isdigit() :
    x=int(x)
    y=int(y)
    z=raw_input("enter the operation to be performed")
    if z=="+":
        a=x+y
        print a
    elif z=="/":
        a=x/y
        print a
    elif z=="*":
        a=x*y
        print a
    elif z=="%":
        a=x%y
        print a
    elif z=="-":
        a=x-y
        print a
    else:
        print "wrong input"
else:
    print "enetr numbers only"
    
