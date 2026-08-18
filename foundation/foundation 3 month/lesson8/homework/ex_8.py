def checks(x):
	if x[1]==True:
		return True

k=int(input("K ni kiriting: "))
arr=dict()
for x in range(1,k+1):
	name=input("Taom nomi: ")
	check=input("1: true 0 false ")
	if check=='0':
		check=False
	else:
		check= True
	arr[name]=check
ms=tuple(arr.items())
print(ms)
ls=tuple(filter(checks,ms))
print(ls)
