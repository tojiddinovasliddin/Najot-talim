import random
def check(flname):
	with open(flname,'wt') as w:
		k=int(input("Elemenlar soni: "))
		for x in range(k):
			w.write(str(random.randint(10,99))+',')
		print("fayl kiritldi")
def chec(flname):
	with open(flname,'rt') as r:
		data=r.read().split(',')
		data.pop(-1)
		ms=list()
		for x in data:
			if x.isdigit()==True:
				x=int(x)
				ms.append(x)
		return ms

def ceck(flname,arr):
	with open(flname,'wt') as w:
		for x in arr:
			w.write(str(x)+',')
		
		print("Faylga yozildi")


def checks(ms):
	ans=list()
	for x in ms:
		x=x**2
		ans.append(x)
	return ans


k=input("Fayl nomi kiriting: ")
check(k)
arr=chec(k)
print(arr)
ms=checks(arr)
print(ms)
s=input("qaysi faylga kiritmoqchisiz: ")
ceck(s,ms)

