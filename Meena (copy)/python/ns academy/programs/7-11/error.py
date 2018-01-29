try:
   # print 'hi'+10
   # 1/0
    print 'helllo world'
   # fp=open('somefile.txt','r')#//throws error because we are trying to open un existed file
   # fp.write("some text")
   # fp.close()
    raise ZeroDivisionError('zero division')
except TypeError,e:
    print 'error occured'
    print 'lets try '
except ZeroDivisionError,e:
    print 'zero division error'
    print e
except Exception,e:
	print 'generic error block called'
	print e
else:
    print "gdfug"
finally:
	#this code will run no matter exception occured or not
	print 'finally called'


