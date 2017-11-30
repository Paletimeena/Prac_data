#!/usr/bin/python3
from math import sqrt
print("\n\n ***** Question_4 *****\n\n")
directions = []

movement = input("\n(Enter 'stop' to quit)\nEnter movement 'Direction distance': ")
while movement != "STOP":
	directions.append(movement.split(" "))
	movement = input("\n(Enter 'stop' to quit)\nEnter movement 'Direction distance': ")

# directions = (('UP', 5), ('DOWN', 3), ('LEFT', 3), ('RIGHT', 2))

cur_point = [0, 0]

for val in directions:
	if val[0] == 'UP':
		cur_point[1] += int(val[1])
	elif val[0] == 'DOWN':
		cur_point[1] -= int(val[1])
	elif val[0] == 'LEFT':
		cur_point[0] -= int(val[1])
	elif val[0] == 'RIGHT':
		cur_point[0] += int(val[1])
	else:
		pass

# distance = sqrt((x2-x1)^2 + (y2-y1)^2)

distance = sqrt(((cur_point[0]-0)**2) + ((cur_point[1]-0)**2))

print("distance from (0, 0) to {} is: ".format(tuple(cur_point))),
print(int(distance))