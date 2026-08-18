n=int(input("Soni kriting: "))
j=0
while n>0:
	k=n%10
	if k>j:
		j=k
	n=n//10
print(j)
