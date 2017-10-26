import  itertools
sum_list = []
stuff = [1,2, 5, 7]
for L in range(0, len(stuff)+1):
    for subset in itertools.permutations(stuff, L):
        print subset
	print sum(subset)
	sum_list.append(sum(subset))
	print sum_list	
print set(sum_list)
new_list = list(set(sum_list))
new_list.sort()
print new_list
print new_list[-1]+2
for each in range(0,new_list[-1]+2):
    if each not in new_list:
        print(each)
        break

