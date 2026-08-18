import random
k=int(input("K ni kiriting: "))
arr=list()
for x in range(1,k+1):
	s=input(f"{x} chi elementni kiriting: ")
	arr.append(s)
for x in arr:
	j=str(x)
	if j==j[::-1]:
		print(x,end=",")
