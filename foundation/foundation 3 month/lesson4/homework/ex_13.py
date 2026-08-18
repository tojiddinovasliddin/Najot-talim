import random
k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(10,30))
for x in arr:
	print(x,end=",")
j=0
while j<len(arr):
	if arr[j]%2==0:
		arr.pop(j)
	else:
		j+=1
print("")
for x in arr:
	print(x,end=",")

