import random
k=int(input("K ni kiriting: "))
ms=set()
for x in range(k):
	ms.add(random.randint(10,90))
print(ms)
cnt=0
j=int(input("J ni kiriting: "))
for x in ms:
	if x==j:
		print("Qidirgan son bor")
		break
	else:
		cnt+=1
if cnt>1:
	print("Qidirgan son yuq")
