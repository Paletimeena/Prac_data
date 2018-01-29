def oddoreven(x):
    if isinstance(x,int):
        if x%2==0:
            print "even"
        else :
            print "odd"
    else:
        print "x is not int"

oddoreven(10)
oddoreven(3)
oddoreven('fhi')
