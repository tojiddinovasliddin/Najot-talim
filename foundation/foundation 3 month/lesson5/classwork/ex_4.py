k=int(input("NEchta element  kiritmoqchisiz: "))
ms=set()
cnt=0
for x in range(1,k+1):
	s=input(f"{x} chi elementni kiriting: kiriting: ")
	if s in ms:
		cnt+=1
	ms.add(s)
print(ms)
if cnt>0:
	print("False")
else:
	print("True")
