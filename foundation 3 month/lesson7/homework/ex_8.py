import random
def check(list1,list2):
	tot=list1+list2
	return tot

k=int(input("arr and ms  ni kiriting: "))
arr=list()
ms=list()
for x in range(k):
	arr.append(random.randint(10,50))
	ms.append(random.randint(10,50))
print(arr)
print(ms)
ans=check(arr,ms)
print(ans)
