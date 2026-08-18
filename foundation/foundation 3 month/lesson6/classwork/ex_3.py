k=int(input("K ni kiritign: "))
arr=dict()
for x in range(1,k+1):
	name=input(f"{x} chi maxshulot nomi: ")
	price=int(input(f"{x} chi maxsulot narxi: "))
	amount=int(input(f"{x} chi maxulotning soni: "))
	tota=price*amount
	arr[name]={'narxi':price,'miqdori':amount,'sum':tota}
print(arr)
suma=0
for x in arr:
	suma+=(arr[x]['sum'])
print(f"Jami:${suma}")
if suma>=100:
	s=suma/10
	total=suma-s
	print(f"chegirma: ${s} ")
	print(f"Siz turaydigan suma: ${total}")
	ms=tuple([suma,s,total])
	print(ms)
else:
	print(f"Sizda chegirma mavjud emas va siz tulaydigan pul: ${suma} ")
	j=([suma])
	print(j)
