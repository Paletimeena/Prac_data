class Student:
    def setDetails(self,name,rollno,marks):
        self.name=name
        self.rollno=rollno
        self.marks=marks
        #pirnt self.setDetails()
    def printAccount(self):
        print self.name+' roll number '+self.rollno+' marks obtainedn'+str(self.marks)
    def calper(self,marks):
        print self.marks
        self.per=marks*100/500
        print self.per,'%'
    

anand=Student()
meena=Student()
arshiya=Student()
anand.setDetails('Anand','3','452')
anand. printAccount()
meena.setDetails('Meena','17','269')
meena. printAccount()
arshiya.setDetails('Arshiya','5','368')
arshiya. printAccount()
anand.calper(452)
#print anand.per
meena.calper(269)
arshiya.calper(368)

