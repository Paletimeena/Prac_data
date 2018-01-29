Files:
    touch //to create empty floder
    fp=open('hello.txt','rb','wb')//pointer points to the 1st char
    fp.read()
    fp.close()
    fp=open('heloo.txt','w')
    fp.write('this is first line in the file\n')
    fp.close()
    fp=open('hello.txt','r')
    fp.tell()//tells were is the pointer
    fp.read()//this is second line and this is the appendend line
    fp.seek(0)//moves the pointer to the position given.
    fp.readlines()
    fp.writelines(x)
    fp.readline()
    fp.name
    fp.mode
    fp.closed
//log.py
touch log.py
touch txt.exe
touch uselog.py
....file path....setup
///import os
os.getcwd()
filepath=os.getcwd()+'/log.txt'

import os
def write(message):
    filepath=os.getcwd()+'/log.txt'
    fp=open(filepath,'a')
    fp.write(message)
    fp.close()
    return True



from log import write
write('this is first line')
write ('this is second line')
