
#!/usr/bin/python
import json 

def Login_Details():
	'''This function will take input from a .txt file(credentials.txt) '''
	dictionary = json.load(open("credentials.txt"))
	print dictionary
	username = dictionary["UserName"]
	password = dictionary["Password"]

	return username , password