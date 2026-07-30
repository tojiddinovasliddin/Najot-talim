def check(flname):
	with open(flname,'wt') as w:
		s=input("Matni kiriting: ").split()
		m=len(s)
		for x in range(m):
			w.write(s[x]+' ')
		print("Fayl kiritildi")

def checks(flname):
	with open(flname,'rt') as r:
		m=r.read().split(' ')
		m.pop(-1)
		arr=list()
		for x in m:
			arr.append(x)
		return arr
def chek(ms):
	ms=ms[::-1]
	en=list()
	for x in ms:
		x=x[::-1]
		en.append(x)
	return en


k=input("Fayl nomi kiritng: ")
check(k)
arr=checks(k)
print(arr)
ans=chek(arr)
print(ans)
