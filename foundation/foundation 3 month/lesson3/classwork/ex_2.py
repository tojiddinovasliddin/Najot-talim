k=int(input("Nechta maxsulot olmoqchisiz: "))
n=1
total=0
while(n<=k):
	d=int(input("maxsulot narxini kiriting: $"))
	total+=d
	n+=1
	
print(f"Jami maxsulot narxi: ${total}")
if total>=100 and total<200:
	print("Sizda %10 chqirma bor")
	a=total-total/10
	print(f"Yakuniy narx: ${a}")
elif total>=200 and total<500:
	print("Sizda %15 chegirma bor: ")
	b=total-total/100*15
	print(f"Yakuniy narx: ${b}")
elif total>=500:
	print("Sizda %20 foiz chegirma bor")
	c=total-total/100*20
	print(f"Yakuniy narx: ${c}")
