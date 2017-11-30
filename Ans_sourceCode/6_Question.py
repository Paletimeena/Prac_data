#!/usr/bin/python3
print("\n\n ***** Question_6 *****\n\n")
subjects = ["I", "You"]
verbs = ["Play", "Love"]
objects = ["Hockey", "Footbal"]

def sent_gene(subjects, verbs, objects):
	for subject in subjects:
		for verb in verbs:
			for obj in objects:
				yield("{} {} {}".format(subject, verb, obj))


get_senten = sent_gene(subjects, verbs, objects) # Generator Object

for line in get_senten:
	print(line)