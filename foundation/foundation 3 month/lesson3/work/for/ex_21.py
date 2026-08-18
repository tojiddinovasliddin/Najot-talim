n=int(input("K ni kiriting: "))
k=n
total=0
while k>0:
	s=k%10
	total+=s
	k=k//10
print(n%total)

