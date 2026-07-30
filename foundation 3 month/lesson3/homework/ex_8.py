k=int(input("k ni kiriting: "))
total=0;
j=1
while j<=k//2:
	if k%j==0:
		total+=j
	j+=1;
if(total==k):
	print("Mukkamar son")
else:
	print("Mukamar son emas")
