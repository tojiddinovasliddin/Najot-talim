k=int(input("Soni kiriting: "))
tot=0
while k>0:
	j=k%10
	tot+=j
	k=k//10
print(tot)
