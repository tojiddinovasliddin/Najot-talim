def check(m):
	with open(m,'wt') as w:
		s=input("Matni kirting: ").split()
		for x in range(len(s)):
			w.write(s[x]+ ' ')
		print("Faylga saqlandi")
def checks(s):
	with open(s,'rt') as r:
		e=r.read().split(' ')
		e.pop(-1)
		arr=list()
		for x in e:
			arr.append(x)
		return arr
def chec(arr):
	s='b'
	for x in arr:
		if len(x)>len(s):
			s=x
		
	print(s)


k=input("Fayl nomi kiritng: ")
check(k)
ms=checks(k)
print(ms)
chec(ms)
