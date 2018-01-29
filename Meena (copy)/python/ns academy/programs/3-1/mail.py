import smtplib
to='amaresh137@yahoo.com'
gmail_user='paletimeena@gmail.com'
gmail_pwd='amernath'
smtpserver=smtplib.SMTP("smtp.gmail.com",587)

smtpserver.starttls()
smtpserver.login(gmail_user,gmail_pwd)
header='To:'+to+'\n'+'From:'+gmail_user+'\n'+'subject:testing\n'
print header
msg=header+'\ntis is the test msg from python class\n'
smtpserver.sendmail(gmail_user,to,msg)
print "email sent"
smtpserver.close()
