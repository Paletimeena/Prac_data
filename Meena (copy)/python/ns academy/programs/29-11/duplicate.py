#WAP to identify the duplicate character in a given string
check_string=raw_input("enter the string")
#i=1
#j=0
#c=0
#while j<len(string)-1:
  #  while i<len(string):
        #print "entered while"
      #  if string[j]==string[i]:
      #    print string[i]
       #   c=c+1
       #   i=i+1
      #  j=j+1
#print c,"duplicate is found"
count =0
for s in check_string:
    if count.has_key(s):
        count[s] += 1
    else:
         count[s] = 1

for key in count:
    if count[key] > 1:
          print key, count[key]
    


    
    
        
        
