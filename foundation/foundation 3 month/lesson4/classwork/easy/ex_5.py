import random
k=int(input("K ni kiriting: "))
arr=[]
for x in range(k):
	arr.append(random.randint(10,30))
for x in arr:
	print(x,end=" ")
print("")
s=int(input("S ni kiriting: "))
for x in arr:
	if x<s:
		print(x,end=" ")
