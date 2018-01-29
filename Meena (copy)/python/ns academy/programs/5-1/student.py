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
        query="INSERT INTO student(name,email,phone) values('"+student[0]+"','"+student[1]+"','"+student[2]+"')"
        self.cursor.execute(query)
        if self.cursor.rowcount>0:
            self.conn.commit()

            return True
        else:
            return False
        self.conn.close()

class student1(object):
    def __init__(self,master):
        self.master=master
        self.master.title("Application Form")
        #create the label and Form elements
        master.minsize(width=666,height=666)
        self.label=Label(self.master,text="Register here",font=("Helvetica", 16))
        self.label.grid(row=0,columnspan=2)

        self.namelabel=Label(self.master,text="Name")
        self.namelabel.grid(row=1,column=0,padx=20 , pady=20)
        self.nameentry=Entry(self.master)
        #self.nameentry =Text(self.master, height=1, width=40)
        self.nameentry.grid(row=1,column=1)

        self.emaillabel=Label(self.master,text="Email-ID")
        self.emaillabel.grid(row=2,column=0,padx=20 , pady=20)
        self.emailentry=Entry(self.master)
        #self.emailentry =Text(self.master, height=1, width=40)
        self.emailentry.grid(row=2,column=1)

        self.phonelabel=Label(self.master,text="phone-NO")
        self.phonelabel.grid(row=3,column=0,padx=20 , pady=20)
        self.phoneentry=Entry(self.master)
        #self.phoneentry =Text(self.master, height=1, width=40)
        self.phoneentry.grid(row=3,column=1)

        self.submitbutton=Button(self.master,text="submit",command=self.submit)
        self.submitbutton.grid(row=4,column=5)
        self.closebutton=Button(self.master,text="close",command=self.master.quit)
        self.closebutton.grid(row=4,column=10)

    def submit(self):
        name=self.nameentry.get()
        email=self.emailentry.get()
        phone=self.phoneentry.get()
        student=(name,email,phone)
        db=DB('localhost','root','Amernath@11','lms')
        if db.create(student):
            print "inserted"
        else:
            print "error"


root=Tk()
s1=student1(root)
root.mainloop()