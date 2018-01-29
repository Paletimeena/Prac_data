#!/usr/bin/python
def complex_num_mul(list1,list2):
	multiply_result=1
	lenght=len(list1)
	for index in range(lenght):
		complex_num=complex(list1[index],list2[index])
		multiply_result=multiply_result*complex_num
	return multiply_result
def main():
	list1=[1,2,3]
	list2=[1,2,3]
	if(len(list1)!=len(list2)):
		print "ppppp"
	else:
		multiply_result=complex_num_mult(list1,list2)
		for index in range(len(list1)):
			if((index!=-1)and(index!=len(list1)-1)):
				print "" %(list1[index],list2[index])
			else:
				print "" %(list1[index],list2[index])
			
		print complex_multiplication
		return
main()
