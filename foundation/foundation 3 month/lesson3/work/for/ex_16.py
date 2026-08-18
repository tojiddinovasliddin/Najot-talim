a=100
b=999
while a<=b:
	n=a%10
	m=a//10%10
	k=a//100
	if n==3 or m==3 or k==3:
		print(a,end=(" "))
	a+=1
