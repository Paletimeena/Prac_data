#!/usr/bin/python3
print("\n\n ***** Question_3 *****\n\n")
class Div_By_Seven:
	def __init__(self, nthValue):
		self.nthValue = nthValue

	def generate_numbers(self):
		for val in range(1, self.nthValue):
			if val % 7 == 0:
				yield val



obj_1 = Div_By_Seven(89)
get_generator = obj_1.generate_numbers() # Create a generator

for val in get_generator:
	print(val)

