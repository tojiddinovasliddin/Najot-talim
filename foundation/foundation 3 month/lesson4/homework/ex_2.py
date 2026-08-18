import random
k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(10,15))
arr.sort()
print("\n\t--------------- Ochirishdan oldin----------------")
print("")
for x in arr:
	print(x,end=" ")
j=0
while j<len(arr):
	if arr.count(arr[j])>1:
		arr.pop(j)
	else:
		j+=1
print("\n\t--------------- Ochirishdan keyin----------------")
print("")
arr.sort()
for x in arr:
	print(x,end=" ")
