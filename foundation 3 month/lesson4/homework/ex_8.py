import random
k=int(input(" K ni kiriting: "))
arr=list()
ms=[]
for x in range(k):
	arr.append(random.randint(10,20))
	ms.append(random.randint(10,20))
for x in arr:
	print(x,end=" ")
print("")
for x in ms:
	print(x,end=" ")
print("")
for x in range(k):
	if ms[x]==arr[x]:
		print(ms[x],end=" ")
