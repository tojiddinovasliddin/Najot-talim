k=int(input("K ni kiriting: "))
total=0
for x in range(1,k):
	if k%x==0:
		total+=x
if total==k:
	print("Mukkamal son")
else:
	print("MUkammal son emas")
