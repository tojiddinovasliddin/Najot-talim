a=int(input("A ni kiriting: "))
b=int(input("B ni kiriting: "))
for x in range(a,b+1,1):
	cnt=0
	for y in range(1,x+1,1):
		if x%y==0:
			cnt+=1
	if cnt==2:
		print(x,end=(","))
