k=int(input("Nechta odamning malumotni kiritmoqchisiz: "))
ms=list()
for x in range(1,k+1):
	full=input(f"{x} chi odamining malumotini kriting: ")
	ms.append(full)
ms.sort()
for x in ms:
	print(x,end=", ")
