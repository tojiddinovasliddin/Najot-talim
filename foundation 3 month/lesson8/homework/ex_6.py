import random
k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(1000,10000))
print(arr)
ms=list(map(lambda x: x+x*0.12,arr))
print(ms)
