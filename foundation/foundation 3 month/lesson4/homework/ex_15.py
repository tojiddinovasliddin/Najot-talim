import random
k=int(input("k ni kiriting: "))
arr=list()
ms=list()
j=list()
for x in range(k):
	arr.append(random.randint(10,20))
for x in range(k):
	ms.append(random.randint(1,1))
for x in arr:
	print(x,end=",")
print("")
for x in range(k):
	j.append(arr[x]+ms[x])
print(j)
