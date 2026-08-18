def check(ms):
	j=set(ms)
	k=sorted(j)
	return k	
k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	s=input("Kiriting: ")
	arr.append(s)
print(arr)
print(check(arr))

