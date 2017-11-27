#!/usr/bin/python

lsta=[]
with open("file1.txt") as f1,open("file2.txt") as f2:
    words1=set(line.strip() for line in f1)   #create a set of words from dictionary file
    words2=set(line.strip() for line in f2)
   
    for ele in words1:
	lst=ele.split(" ")
	lsta.append(str(lst[0]))
    lsta=set(lsta)
  
    #why sets? sets provide an O(1) lookup, so overall complexity is O(N)

    #now loop over each line of other file (word, freq file)
    for line in words2:
	if line in lsta:
		print line

		

"""
	#word=str(line.split())   #fetch word,freq 
	if str(line) in lsta:        #if word is found in words set then print it
            print "word"
"""




