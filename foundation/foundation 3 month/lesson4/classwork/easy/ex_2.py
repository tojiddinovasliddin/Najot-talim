import random
k=int(input("K ni kiriting: "))
arr=list()
cnt=0
for x in range(k):
	arr.append(random.randint(10,30))
	cnt+=1
for x in arr:
	print(x,end=" ")
print("")
print("Soni: ",cnt)
print("Ohirigin soni:", arr[len(arr)-1])
print(arr[::-1])
