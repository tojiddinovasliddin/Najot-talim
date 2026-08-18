def check(flname):
	with open(flname,'wt') as w:
		k=input("Matni kiritng: ").split()
		s=len(k)
		for x in range(s):
			w.write(k[x]+' ')
		print("Fayl kiritildi")
def checks(flname):
	with open(flname,'rt') as r:
		data=r.read().split(" ")
		data.pop(-1)
		arr=dict()
		ms=list()
		for x in data:
			ms.append(x)
		print(ms)
		for x in ms:
			if x in arr:
				arr[x]+=1
			else:
				arr[x]=1
		return arr
def res(arr):
	maxx=max(arr.values())
	k=None
	for x in arr:
		if arr[x]==maxx:
			k=x
	print(f"Eng kup qatnashgan soz {k} {maxx} marta")

k=input("Fayl nomi: ")
check(k)
ans=checks(k)
print(ans)
res(ans)
