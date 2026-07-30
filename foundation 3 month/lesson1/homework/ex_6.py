def check(arr):
	ms=dict()
	for x in arr:
		if x[0] in ms:
			ms[x[0]]+=x[1]
		else:
			ms[x[0]]=x[1]

	maxx=max(ms.values())
	s=None
	for x in ms:
		if ms[x]==maxx:
			s=x
	print(f"Eng kup ishlgan ishchi {s} ({maxx} soat)")


k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	name=input("ismni kiring: ")
	hours=int(input("Nechi soat ishlagan: "))
	arr.append((name,hours))

check(arr)
