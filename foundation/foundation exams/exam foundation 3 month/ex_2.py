def check(s):
	with open(s,'wt') as w:
		m=input("Matni kiriting: ")
		for x in m:
			w.write(x+ '')
		print("Faylga malumot kirtildi")
	with open(s,'rt') as r:
		m=r.read().split()
		arr=list()
		for x in m:
			arr.append(x)

		ms=dict()
		for x in arr:
			if x in ms:
				ms[x]+=1
			else:
				ms[x]=1
		print(ms)



k=input("Fayl nomini kiriting: ")
check(k)
