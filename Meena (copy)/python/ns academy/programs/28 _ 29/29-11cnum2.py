x=raw_input("enter a number")
if x.isdigit():
    print "its int"
elif x.find('.')!=-1:
    print "its float"
elif x.find('L')!=-1:
    print "its long"
elif x.isalnum():
    print "its string"
else:
    print "not found"
