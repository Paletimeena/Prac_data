#to determine the given numb is prime or not
num=raw_input('number ? ')
num=int(num)
i=2
while i<=num-1:
    if num%i==0:
        print 'given number is not prime number'
        break
        #continue
    i=i+1
if i==num:
    print 'given numb is prime'
#5
#2<=4
#5%2=1
#5%3=1
#5%4=1
    


    

    
