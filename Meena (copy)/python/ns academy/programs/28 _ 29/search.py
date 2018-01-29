name=raw_input("enter ir name: ")
search=raw_input("enter the string to search: ")
if name.find(search)!=-1:
    print "there is a match",search
else:
    print "no match found"
