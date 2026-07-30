a=int(input("Yoshingizni kiriting: "))
b=int(input("Qancha yil obuna bulmoqchisiz: "))
c=int(input("Narxni kiriting: $"))
if a>=50:
	if b>=3 and b<5:
		print("Yosh buyicha chegirma:%20")
		print("Yosh buyicha chegirma:%10")
		k=c-c/100*20
		d=k-k/100*10
		print(f"Yakuniy narx: ${d}")
	elif b>=5:
		print("Yosh buyicha chegirma:%20")
		print("Yosh buyicha chegirma:%15")
		f=c-c/100*20
		e=f-f/100*15
		print(f"Yakuniy narx: ${e}")
	else:
		print("Yosh buyicha chegirma:%20")
		s=c-c/100*20
		print(f"Yakuniy narx: ${s}")
elif a<50:
	if b>=3 and b<5:
		print("Yosh buyicha chegirma:%10")
		g=c-c/100*10
		print(f"Yakuniy narx: ${g}")
	elif b>=5:
		print("Yosh buyicha chegirma:%15")
		h=c-c/100*15
		print(f"Yakuniy narx: ${h}")
	else:
		print(f"Sizda chegirma yuq:{c}")
