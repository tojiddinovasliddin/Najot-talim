import random
def check(k):
	cnt=0
	for x in range(1,k+1):
		if k%x==0:
			cnt+=1
	if cnt==2:
		return True
	else:
		return False
def alls(ms):
	j=0
	while len(ms)>j:
		if check(ms[j])==True:
			m=ms.pop(j)
		else:
			j+=1
	return ms


k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(1,100))
print(arr)
ms=alls(arr)
print(ms)

