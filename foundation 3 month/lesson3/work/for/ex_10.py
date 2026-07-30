n=int(input("N ni kiriting: "))
m=int(input("M ni kiritng: "))
k=int(input("K ni kiriting: "))
cnt=0
total=0
while n<=m:
	if n%2==0:
		cnt+=1
		total+=n
	n+=1
	if cnt==k:
		break
print(total)
