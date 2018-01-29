from xml.etree import ElementTree as ET
students=ET.Element('students')
student=ET.SubElement(students,'student')
studentname=ET.SubElement(student,'name')
studentemail=ET.SubElement(student,'email')
studentid=ET.SubElement(student,'id')
ET.dump(students)

studentname.text='meena'
studentemail.text='text@gmail.com'
studentid.text='6565262'
ET.dump(students)

import os
filepath=os.getcwd()+'/sample.xml'
tree=ET.ElementTree(students)
tree.write(filepath)
tree.write(filepath,encoding="UTF-8",xml_declaration=True)
