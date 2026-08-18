k=int(input("A ni kiriting: "))
cnt=0
while k>0:
	if k %2==0:
		k=k//2
		cnt+=1
	elif k % 2==1:
		k=k-1
		cnt+=1
print("Cnt=",cnt)
