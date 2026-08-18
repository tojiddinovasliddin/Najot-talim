import random
def check(ms):
	maxx=max(ms)
	minn=min(ms)
	s=tuple()
	s=(maxx,minn)
	return s

k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(10,90))
print(arr)
ans=check(arr)
print(ans)
