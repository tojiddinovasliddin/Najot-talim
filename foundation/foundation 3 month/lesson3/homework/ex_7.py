a=100
b=999
while(a<=b):
	k=a%10
	j=a//10%10
	e=a//100
	if k==j and k !=e: 
		print(f"{e}",end=(""))
		print(j,end=(""))
		print(k,end=(""))
		print("",end=(","))
	elif k!=j and j==e:
		print(e,end=(""))
		print(j,end=(""))
		print(k,end=(""))
		print("",end=(","))
	elif e!=j and k==e:
		print(e,end=(""))
		print(j,end=(""))
		print(k,end=(""))
		print("",end=(","))
	a+=1
