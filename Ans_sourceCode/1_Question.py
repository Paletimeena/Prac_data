import re
print("\n\n ***** Question_1 *****\n\n")
passwords = input("Enter passwords with ',' separated: ").split(',')
#passwords = "Abd1234@1,a F1#,2w3E,2We3345".split(',')

for password in passwords:
	if len(password) > 5 and len(password) < 12:
		if " " not in password:
			if re.search(r"[0-9]", password):
				if re.search(r"[a-z]", password):
					if re.search(r"[A-Z]", password):
						if re.search(r"[$#@]", password):
							print(password)

