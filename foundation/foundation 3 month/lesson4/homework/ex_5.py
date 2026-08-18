import random
k=int(input("K ni kiriting: "))
arr=['p','q']
ms=list()
for x in range(k):
	for j in arr:
		ms.append(j+str(x))
print(ms)
