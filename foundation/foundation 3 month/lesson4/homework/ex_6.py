k=int(input("K ni kiriting: "))
ms=list()
for x in range(1,k+1):
	s=input(f"{x} ch elementni kiriting: ")
	ms.append(s)
for x in ms:
	s=str(x)
	if s==s[::-1]:
		print(s,end=" ")
