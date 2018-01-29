from Tkinter import *
def printme():
    print entry.get()
    print "hello welcome to the gui"
    labeltext.set('simple form changed')
    
root=Tk()
root.title('Grid layout')
labeltext=StringVar()
labeltext.set("simple form")
label=Label(root,textvariable=labeltext)
label.grid(columnspan=2)

entry=Entry(root)
entry.grid(columnspan=2)

btn1=Button(root,text='click me',command=printme)
btn1.grid(row=2,column=0)
btn2=Button(root,text='close',command=root.quit)
btn2.grid(row=2,column=1)

root.mainloop()
