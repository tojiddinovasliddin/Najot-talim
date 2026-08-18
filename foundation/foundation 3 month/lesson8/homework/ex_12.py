def check(x):
	return x[0],x[1]-x[1]*0.10

k=int(input("Maxsulotlar soni: "))
arr=dict()
for x in range(1,k+1):
	name=input("Maxsulot nomi: ")
	price=int(input("MAxsulot narxi: "))
	arr[name]=price
ms=tuple(arr.items())
ls=tuple(map(check,ms))
print(ls)
