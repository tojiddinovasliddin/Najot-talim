import random
def chec(flname):
	with open(flname,'wt') as w:
		k=int(input("Elemenlar soni: "))
		for x in range(k):
			w.write(str(random.randint(10,99))+',')
		print("Faylga yozildi")
def check(flname):
	with open(flname,'rt') as r:
		data=r.read().split(',')
		data.pop(-1)
		print(data)
		ms=list()
		for x in data:
			if x.isdigit()==True:
				x=int(x)
				ms.append(x)
		maxx=max(ms)
		print(maxx)

k=input("Fayl nomini kiriting: ")
chec(k)
check(k)
