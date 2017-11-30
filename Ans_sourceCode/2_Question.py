from operator import itemgetter
print("\n\n ***** Question_2 *****\n\n")
ip_tuple = (('Tom', 19, 80),('John', 20, 90), ('Jony', 17, 91), ('Jony', 17, 93), ('Json', 21, 85))

op_tuple = sorted(
				sorted(
					sorted(ip_tuple, 
						key=lambda x:x[2]), 
					key=lambda x:x[1]), 
				key=lambda x:x[0])

print(op_tuple)
