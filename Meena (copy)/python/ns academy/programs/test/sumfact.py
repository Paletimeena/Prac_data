x=int(raw_input("enter the number"))
y=0
while x!=0:

        i=x
        print i

        while i!=0:

               y=i*(i-1)
               print y

               i=i-1

        print i,'of factorial is+',y

        y+=y

        x=x-1

print "toatal factorial is ",y
