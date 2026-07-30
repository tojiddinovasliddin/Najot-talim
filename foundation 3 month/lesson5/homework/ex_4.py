import random
ms=set()
k=int(input("K ni kiriting: "))
for x in range(k):
	ms.add(random.randint(10,99))
print("Setning elmentlari: ",ms)
arr=list(ms)
j=sorted(arr)
d=j.pop(0)
check=set(j)
print("Uchilgandan keyin: ",check)
