def check(ms):
	if len(ms)==0:
		return 0
	s=ms[0]
	tot=0
	for x in ms:
		if x==s:
			s=x
			tot+=2
		else:
			s=x
			tot+=3
	return tot

k=int(input("Nechta rang kiritmoqchisizz: "))
arr=list()
for x in range(k):
	arr.append(input("rangni kiriting: "))
print(arr)
ms=check(arr)
print(ms)
