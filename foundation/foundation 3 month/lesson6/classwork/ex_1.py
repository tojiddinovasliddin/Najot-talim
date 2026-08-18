k=input("matni kiriting: ").split()
arr=dict()
for x in list(k):
	if x in arr:
		arr[x]+=1
	else:
		arr[x]=1
print(arr)
