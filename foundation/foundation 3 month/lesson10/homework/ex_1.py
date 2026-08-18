import random
def check(x):
	with open(x,'wt') as w:
		m=int(input("elementlar soni kiriting: "))
		for x in range(m):
			w.write(str(random.randint(10,99))+',')

		print("Fayl kiriting")


def chec(x):
	with open(x,'rt') as r:
		ms=list()
		d=r.read().split(',')
		d.pop(-1)
		print(d)
		for x in d:
			if int(x)%2==0:
				ms.append(x)
		ms=ms[::-1]
		print(ms)


k=input("Fayl nomini kiritng: ")
check(k)
chec(k)
