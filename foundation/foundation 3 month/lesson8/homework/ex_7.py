def check(x):
		if "@" in x:
			return True 

k=int(input("K ni kiritng: "))
arr=[]
for x in range(k):
	arr.append(input("Email kiriting: "))
print(arr)
ls=list(filter(check,arr))
print(ls)
