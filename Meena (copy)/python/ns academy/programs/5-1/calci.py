from Tkinter import *

class Calculator:

    def __init__(self,master):
        self.master=master
        self.master.title("calucalator")

        self.total=0
        self.entered_number=0

        self.label=Label(master,text="Total:")
        self.label.grid(row=0,column=0,sticky=W)


        self.total_label_text=IntVar()
        self.total_label_text.set(self.total)
        self.total_label=Label(master, textvariable=self.total_label_text)
        self.total_label.grid(row=0,column=1,sticky=W+E)

        vcmd = master.register(self.validate)
        self.entry = Entry(master,validate="key", validatecommand=(vcmd, '%P'))

        self.entry.grid(row=1,column=0)
        print "button"
        #create button
        self.addbutton= Button(master,text="+",command=lambda:self.update("add"))
        self.addbutton.grid(row=2,column=1,sticky=W)

        self.subbutton= Button(master,text="-",command=lambda:self.update("sub"))
        self.subbutton.grid(row=2,column=2,sticky=W)

        self.divbutton= Button(master,text="/",command=lambda:self.update("div"))
        self.divbutton.grid(row=3,column=1,sticky=W)

        self.mulbutton= Button(master,text="*",command=lambda:self.update("mul"))
        self.mulbutton.grid(row=3,column=2,sticky=W)

        self.resetbutton= Button(master,text="reset",command=lambda : self.update("reset"))
        self.resetbutton.grid(row=4,column=1,sticky=W)


    def validate(self, new_text):
        if not new_text: # the field is being cleared
            self.entered_number = 0
            return True

        try:
            self.entered_number = int(new_text)
            return True
        except ValueError:
            return False

    def update(self,method):
            print "got"
            if method =="add":
                self.total +=self.entered_number
            elif method=="sub":
                self.total -=self.entered_number
            elif method=="div":
                self.total /=self.entered_number
            elif method=="mul":
                self.total *=self.entered_number
            else:
                self.total=0

            self.total_label_text.set(self.total)
            self.entry.delete(0,END)


root=Tk()
cal=Calculator(root)
root.mainloop()