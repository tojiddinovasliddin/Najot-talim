def check(flname):
	with open(flname,'wt') as w:
		k=int(input("Elemenlar soni: "))
		for x in range(k):
			s=int(input("Elementlarni kiritng: "))
			w.write(str(s)+' ')
		print("Faylga yozildi")

def chec(flname):
	with open(flname,'rt') as r:
		data=r.read().split(' ')
		data.pop(-1)
		print(data)
		ms=list()
		for x in data:
			if  x.isdigit()==True:
				if x==x[::-1]:
					ms.append(x)

		print(ms)


k=input("Fayl nomi kiriting: ")
check(k)
chec(k)
