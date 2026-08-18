store={ 'olma': 5000,'banan' : 7000} 
name=input("Maxsulot nomi: ")
price=int(input("Maxsulot narxi: "))
if name in store:
	print("Bu mahsulot allqachon bor")
else:
	store.update({name:price})
	print("Maxsulot qushildi")
print(store)
