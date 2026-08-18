a=int(input("A ni kiriting: "))
b=int(input("B ni kriting: "))
for x in range(a,b+1):
	if x%2==0:
		x=x*(-1)
	print(x, end=(" "))
