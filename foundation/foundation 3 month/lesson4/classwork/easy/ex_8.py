import random
k=int(input("K ni kiriting: "))
arr=[]
for x in range(k):
	arr.append(random.randint(10,99))
print(arr)
print("Max=",max(arr))
print("Min=",min(arr))
