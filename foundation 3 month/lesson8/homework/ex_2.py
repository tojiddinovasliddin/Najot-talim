k=int(input("Elemenlar soni: "))
arr=dict()
for x in range(k):
	name=input("Fan nomi: ")
	mark=int(input("Baho: "))
	arr[name]=mark
ms=tuple(arr.items())
print(ms)
ls=sorted(ms,key=lambda x: x[1])
print(ls)
