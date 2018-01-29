import smtplib
 
server = smtplib.SMTP('smtp.gmail.com', 587)
server.starttls()
server.login("paletimeena@gmail.com", "amernath")
 
msg = "YOUR MESSAGE!"
server.sendmail("paletimeena@gmail.com", "paletimeena@gmail.com", msg)
server.quit()
