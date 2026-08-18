k=int(input("Soni kiriting (1...999 yoki -1... -999): "))
k=abs(k)
if k<10:
	if k%2==0:
		print("Bir xonali juft son")
	else:
		print("bir xonali toq son")
elif k>9 and k<100:
	if k%2==0:
		print("Ikki xonali juft son")
	else:
		print("Ikki xonali toq son")
elif k>99 and k<1000:
	if k%2==0:
		print("Uch xonali juft son")
	else:
		print("Uch xonali toq son")
else:
	print("Uch xonalidan katta son kiritmang")
