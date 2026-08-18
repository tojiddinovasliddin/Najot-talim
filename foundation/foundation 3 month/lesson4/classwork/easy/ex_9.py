import random
k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(10,99))
arr.sort()
print(arr)
s=arr[1]
j=arr[len(arr)-2]
print("ikkinchi eng kichik element:", s)
print("ikkinchi  eng katta element: ",j)
