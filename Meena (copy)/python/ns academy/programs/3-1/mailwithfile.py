import smtplib
from email.MIMEMultipart import MIMEMultipart
from email.MIMEText import MIMEText
from email.MIMEBase import MIMEBase
from email import encoders
 
fromaddr = "paletimeena@gmail.com"
toaddr = "amtur1991@gmail.com"
 
msg = MIMEMultipart()
 
msg['From'] = fromaddr
msg['To'] = toaddr
msg['Subject'] = "attaching file using pyhton"
 
body = "Hello did you get the attachment"
 
msg.attach(MIMEText(body, 'plain'))
 
filename = "mailwithfile.py"
attachment = open("D:/python/programs/3-1/mailwithfile.py", "rb")
 
part = MIMEBase('application', 'octet-stream')
part.set_payload((attachment).read())
encoders.encode_base64(part)
part.add_header('Content-Disposition', "attachment; filename= %s" % filename)
 
msg.attach(part)
 
server = smtplib.SMTP('smtp.gmail.com', 587)
server.starttls()
server.login(fromaddr, "amernath")
text = msg.as_string()
server.sendmail(fromaddr, toaddr, text)
server.quit()
