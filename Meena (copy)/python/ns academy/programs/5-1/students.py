from Tkinter import *
import pymysql
class DB:
    def __init__(self,host,user,password,database):
        self.host=host
        self.user=user
        self.password=password
        self.database=database
        self.conn=pymysql.connect(self.host,self.user,self.password,self.database)
        self.cursor=self.conn.cursor()
    def create(self,student):
        query="INSERT INTO students(name,email,phone) values('"+student[0]+"','"+student[1]+"','"+student[2]+"')"
        self.cursor.execute(query)
        if self.cursor.rowcount>0:
            self.conn.commit()

            return True
        else:
            return False
        self.conn.close()


class Student:
    def __init__(self,master):
        self.master=master
        self.master.title('Student Form')
        #Create the Label and Form Elements
        master.minsize(width=300, height=300)
        self.label=Label(self.master,text="Student Registration Form",font=("Helvetica", 16))
        self.label.grid(row=0,columnspan=2)

        self.namelabel=Label(self.master,text="Name")
        self.namelabel.grid(row=1,column=0)
        self.nameentry=Entry(self.master)
        self.nameentry.grid(row=1,column=1)

        self.emaillabel=Label(self.master,text="Email")
        self.emaillabel.grid(row=2,column=0)
        self.emailentry=Entry(self.master)
        self.emailentry.grid(row=2,column=1)

        self.phonelabel=Label(self.master,text="Phone")
        self.phonelabel.grid(row=3,column=0)
        self.phoneentry=Entry(self.master)
        self.phoneentry.grid(row=3,column=1)

        self.submitbutton=Button(self.master,text="Register",command=self.submitform)
        self.submitbutton.grid(row=4,column=0)
        self.resetbutton=Button(self.master,text="Quit",command=self.master.quit)
        self.resetbutton.grid(row=4,column=1)

    def submitform(self):
        name=self.nameentry.get()
        email=self.emailentry.get()
        phone=self.phoneentry.get()
        student=(name,email,phone)
        db=DB('localhost','root','Amernath@11','lms')
        if db.create(student):
            print 'inserted'
        else:
            print 'error'

root=Tk()
student=Student(root)
root.mainloop()
