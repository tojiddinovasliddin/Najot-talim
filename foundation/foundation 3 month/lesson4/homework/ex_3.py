import random
k=int(input("K ni kriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(0,5))
for x in arr:
	print(x,end=" ")
j=0
cnt=0
while j<len(arr):
	if arr[j]==0:
		arr.pop(j)
		arr.append("0")
	else:
		j+=1
print( "")
for x in arr:
	print(x,end=" ")
