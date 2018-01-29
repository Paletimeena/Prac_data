import smtplib,base64

filename = "mail2.txt"

# Read a file and encode it into base64 format
fo = open(filename, "rb")
filecontent = fo.read()
encodedcontent = base64.b64encode(filecontent)  # base64
import smtplib
to='amaresh137@yahoo.com'
gmail_user='paletimeena@gmail.com'
gmail_pwd='amernath'
smtpserver=smtplib.SMTP("smtp.gmail.com",587)
marker = "AUNIQUEMARKER"
body ="""
This is a test email to send an attachement.
"""
smtpserver.starttls()
smtpserver.login(gmail_user,gmail_pwd)
header='To:'+to+'\n'+'From:'+gmail_user+'\n'+'subject:testing\n'
print header
# Define the message action
part2 = """Content-Type: text/plain
Content-Transfer-Encoding:8bit

%s
--%s
""" % (body,marker)
# Define the attachment section
part3 = """Content-Type: multipart/mixed; name=\"%s\"
Content-Transfer-Encoding:base64
Content-Disposition: attachment; filename=%s

%s
--%s--
""" %(filename, filename, encodedcontent, marker)
msg=header+'\ntis is the test msg from python class\n'+part3+part2
smtpserver.sendmail(gmail_user,to,msg)
print "email sent"
smtpserver.close()
