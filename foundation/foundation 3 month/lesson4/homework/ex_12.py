k=int(input("K ni kiriting: "))
arr=list()
for x in range(1,k+1):
	ms=input(f"{x} chi elementni kiriting: ")
	arr.append(ms)
cnt=0
for x in arr:
	if len(x)>2 and x[0]==x[-1]:
		cnt+=1
print(f"Count: {cnt}")
