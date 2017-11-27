
#!/usr/bin/pyhton

def  factorial(n):
	#print n
	lastvalue=1
    	if(n <= 3):
        	for i in range(1,n+1):
        		lastvalue=lastvalue*2
        		print lastvalue,
        	n=n+1
        	factorial(n)

		print "\n"
        	
    	else:
    		
			for i in range(1,n+1):
				lastvalue=lastvalue*2
				print lastvalue,
			print "\n"
       
lastvalue=1
print("Factorial:")
factorial(1)
