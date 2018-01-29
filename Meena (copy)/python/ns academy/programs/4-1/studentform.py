from Tkinter import *
class gui:
    def __init__(self, master):
        self.master = master
        self.studentform()

    def studentform(self):
        self.master.title("STUDENT FORM")
        self.label = Label(self.master, text='NAME')
        self.label.grid(row=1, columnspan=2 ,padx=20 , pady=20)
        self.entry = Entry(self.master)
        self.entry = Text(self.master, height=1, width=40)
        self.entry.grid(row=1, column=2)

        self.label = Label(self.master, text='Email-id')
        self.label.grid(row=2, columnspan=2,padx=20 , pady=20)
        self.entry = Entry(self.master)
        self.entry = Text(self.master, height=1, width=40)
        self.entry.grid(row=2, column=2)

        self.label = Label(self.master, text='Phone')
        self.label.grid(row=3, columnspan=2,padx=20 , pady=20)
        self.entry = Entry(self.master)
        self.entry = Text(self.master, height=1, width=40)
        self.entry.grid(row=3, column=2)

        self.label = Label(self.master, text='Age')
        self.label.grid(row=4, columnspan=2,padx=20 , pady=20)
        self.entry =Entry(self.master)
        self.entry =Text(self.master, height=1, width=40)
        self.entry.grid(row=4, column=2)

        self.btn1 =Button(self.master, text='click me')
        self.btn1.grid(row=5, column=1)
        self.btn2 =Button(self.master, text='quit', command=self.master.quit)
        self.btn2.grid(row=5, column=15)


root =Tk()
grid = gui(root)
root.mainloop()
#ROW IS NOT ALTERED
#HOW TO PACK THE LABEL AND ENTRY