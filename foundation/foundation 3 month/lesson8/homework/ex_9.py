def check(x):
	if x[0]=='+' and x[1]=='9' and x[2]=='9' and x[3]=='8':
		return True

k=int(input("Raqamlar soni: "))
arr=[]
for x in range(1,k+1):
	num=input(f"{x} chi raqamni kiriting: ")
	arr.append(num)
print(arr)
ls=list(filter(check,arr))
print(ls)
