import random
k=int(input("K ni kiriting: "))
arr=list()
ms=list()
check=list()
for x in range(k):
	arr.append(random.randint(10,30))
for x in range(k):
	ms.append(random.randint(10,30))
for x in arr:
	print(x,end=" ")
print("")
for x in ms:
	print(x,end=" ")
for x in range(k):
	check.append(arr[x]+ms[x])
total=0
for x in check:
	total+=x
mid=total//k
print("")
print("O'rtacha qiymati: ",mid)
