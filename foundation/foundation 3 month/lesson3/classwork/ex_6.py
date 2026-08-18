a=int(input("Nechta kompaniyani kiritmoqchisiz: "))
while(a>0):
	b=input("Kompaniya nomi: ")
	c=int(input("Narxi kiriting: $"))
	if(c>=100):
		print(f"{b} aksiyasi qimmat")
	elif c<=50:
		print(f"{b} aksiyasi arzon")
	elif c>50 and a<100:
		print(f"{b} aktsiya o'rtacha")
	print("")
	a-=1
