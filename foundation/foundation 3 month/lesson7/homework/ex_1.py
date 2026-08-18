def check(ms):
	j=0
	while j<len(ms):
		if  ms[j]=='':
			ms.pop(j)
		else:
			j+=1
	return ms
k=int(input(" Nechta element Kiriting: "))
arr=list()
for x in range(1,k+1):
	name=input(f"{x} chi elemeni ni kiriting: ")
	arr.append(name)
ans=check(arr)
print(ans)

