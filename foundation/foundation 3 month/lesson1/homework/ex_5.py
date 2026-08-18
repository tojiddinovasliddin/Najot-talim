def check(s):
	m=s.split()
	cnt=0
	ms=list()
	for x in m:
		for y in x:
			if y in '0123456789':
				y='#'
				cnt+=1
				ms.append(y)
			else:
				ms.append(y)
		ms.append(' ')
	if cnt==0:
		print(s)
	else:
		for x in ms:
			print(str(x),end='')

k=input("satrni kiriting: ")
check(k)
