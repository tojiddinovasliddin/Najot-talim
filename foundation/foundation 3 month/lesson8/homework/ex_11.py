def check(x):
	if x[1]=='IT':
		return x[0]


k=int(input("Xodimlar soni : "))
arr=dict()
for x in range(1,k+1):
	name=input(f"{x} chi xodim ismi: ")
	depa=input(f"{x} chi xodim bo'lim : ")
	arr[name]=depa
ms=tuple(arr.items())
print(ms)
ls=tuple(filter(check,ms))
print(ls)
