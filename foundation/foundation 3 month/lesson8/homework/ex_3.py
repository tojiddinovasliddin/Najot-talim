import random
def check(arr1,ms1):
	cnt=[]
	for x in arr1:
		for y in ms1:
			if x==y:
				cnt.append(x)
	return cnt
	
k=int(input("Elemenlar soni: "))
arr=list()
ms=[]
for x in range(k):
	arr.append(random.randint(10,30))
	ms.append(random.randint(10,30))
print(arr)
print(ms)
ls=check(arr,ms)
print(ls)
