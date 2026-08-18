k=int(input("Raqamni kriting: "))
cnt=0
while k>0:
	f=k%10
	f1=k//10%10
	if f==f1:
		cnt+=1
	k=k//10
if cnt>=1:
	print("YES")
else:
	print("NO")
