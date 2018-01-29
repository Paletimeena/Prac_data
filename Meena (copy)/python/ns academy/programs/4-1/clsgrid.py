from Tkinter import *
class gui:
    def __init__(self,master):
        self.master=master
        self.gridlayout()
    def gridlayout(self):
        #self.title("Grid layout")
        self.label=Label(self.master,text='simple form')
        self.label.grid(columnspan=2)
        self.entry=Entry(self.master)
        self.entry.grid(columnspan=5)
        self.btn1=Button(self.master,text='click me')
        self.btn1.grid(row=2,column=0)
        self.btn2=Button(self.master,text='quit',command=self.master.quit)
        self.btn2.grid(row=2,column=1)

root= Tk()
grid= gui(root)
root.mainloop()