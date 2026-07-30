import random
arr=set()
ms=set()
k=int(input("Set elementlar soni: "))
for x in range(k):
	arr.add(random.randint(10,30))
	ms.add(random.randint(10,30))
print(f"Set1: {arr}")
print(f"Set2: {ms}")
ans=arr.symmetric_difference(ms)
print(ans)
