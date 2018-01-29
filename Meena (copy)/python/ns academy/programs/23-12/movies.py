from xml.etree import ElementTree as ET
movies=ET.Element('movies')
comdey=ET.SubElement(movies,'comdey')
m1=ET.SubElement(comdey,'m1')
m2=ET.SubElement(comdey,'m2')
m3=ET.SubElement(comdey,'m3')
m4=ET.SubElement(comdey,'m4')
ET.dump(comdey)

m1.text='alli'
m2.text='jolly'
m3.text='jbgghi'
m4.text='neeo'
ET.dump(comdey)

import os
filepath=os.getcwd()+'/movies'
tree=ET.ElementTree(movies)
tree.write(filepath)
tree.write(filepath,encoding="UTF-8",xml_declaration=True)
