import random
k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	ms=list()
	for j in range(x+1):
		ms.append(random.randint(10,30))
	arr.append(ms)
for x in arr:
	print(x,end=" ")
total=sum(arr[0])
for  x in arr:
	s=sum(x)
	if s>total:
		total=s
print("")
print(total)

