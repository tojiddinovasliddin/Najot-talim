ms=set()
arr=set()
k=int(input("K ni kiriting: "))
for x in range(1,k+1):
	s=int(input(f"{x} ni kiriting: "))
	ms.add(s)
print("\tIkkinchi toplamni kiritng: ")
for x in range(1,k+1):
	j=int(input(f"{x} ni kiritng: "))
	arr.add(j)
cnt=0
for x in ms:
	for j in arr:
		if x==j:
			cnt+=1
if cnt==k:
	print("to'plamalar teng")
else:
	print("Toplamlar teng emas")
