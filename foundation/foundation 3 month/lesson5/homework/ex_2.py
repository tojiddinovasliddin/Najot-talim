k=int(input("K ni kiriting: "))
ms=set()
for x in range(1,k+1):
	s=input(f"{x} chi elementni kiriting: ")
	ms.add(s)
print(ms)
j=len(ms)
print("Tuplam uzunligi: ",j)
