def check(flname):
	with open(flname,'wt') as w:
		k=input("Kiriting: ").split()
		for x in k:
			w.write(x + ' ')
		print("Fayl tayol")

def chec(flname):
	with open(flname,'rt') as r:
		data=r.read().split(' ')
		data.pop(-1)
		ms=list()
		for x in data:
			ms.append(x)
		print(ms)
		s=sorted(ms)
		print(s)

k=input("Fayl nomi kiriting: ")
check(k)
chec(k)
