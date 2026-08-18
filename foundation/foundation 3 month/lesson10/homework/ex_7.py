def check(flname):
	with open(flname,'wt') as w:
		k=input("Suzlarni kiritng: ").split()
		for x in k:
			w.write(x+' ')
		print("Kiritid")

def checks(flname):
	with open(flname,'rt') as r:
		dat=r.read().split(' ')
		dat.pop(-1)
		ms=list()
		for x in dat:
			ms.append(x)
		print(ms)
		arr=list
		for x in ms:
			cnt=0
			for y in x:
				if y in "AaUuOoEeIi":
					cnt+=1
			if cnt==0:
				print(x)


k=input("Fayl nomi: ")
check(k)
checks(k)
