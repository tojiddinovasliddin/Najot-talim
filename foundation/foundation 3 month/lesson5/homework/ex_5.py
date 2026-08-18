import random
ms=set()
k=int(input("K ni kiriting: "))
for x in range(k):
	ms.add(random.randint(10,40))
print(ms)
arr=list(ms)
arr.sort()
print(arr)
