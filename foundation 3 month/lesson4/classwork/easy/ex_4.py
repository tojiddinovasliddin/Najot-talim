import random
k=int(input("K ni kiriting: "))
arr=[]
for x in range(k):
	arr.append(random.randint(10,30))
for x in arr:
	print(x,end=" ")
arr.pop(0)
arr.pop(len(arr)-1)
arr.sort()
print("")
for x in arr:
	print(x,end=" ")
