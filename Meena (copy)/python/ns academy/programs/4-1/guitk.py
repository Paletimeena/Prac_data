from Tkinter import *
def printme():
    print "hello welcome to the gui"
root=Tk()
root.title('gui window')
label=Label(root,text='hi first label on tk')
label.pack()
btn1=Button(root,text='click me',command=printme)
btn1.pack(side=LEFT)
btn2=Button(root,text='close',command=root.quit)
btn2.pack()
root.mainloop()
