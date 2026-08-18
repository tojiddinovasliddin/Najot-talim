def alls(s):
	arr=dict()
	ms=list()
	for x in range(s):
		name=input("Kino nomi: ")
		genre=input("Kini janrni kiriting: ")
		price=int(input("bilet narxi: "))
		arr[name]={'genre':genre,'price':price}
		ms=tuple(arr.items())
	return ms
def search(ms):
	s=input("Qaysi janrni kino qidiryapsiz: ")
	for x in ms:
		if x[1]['genre']==s:
			print(x)

k=int(input("Nechta kino kitasiz: "))
ans=alls(k)
print(ans)
search(ans)
