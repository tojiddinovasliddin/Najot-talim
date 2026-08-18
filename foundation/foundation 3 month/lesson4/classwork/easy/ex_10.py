import random
k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(10,99))
print(arr)
cnt=0
for x in arr:
	if x%2==0:
		cnt+=1
print(cnt)
