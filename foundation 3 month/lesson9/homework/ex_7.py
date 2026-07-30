import ex_7lib as mon
print("Rus ni tanlash uchun 1 bosing")
print("Euro ni tanlash uchun 2 ")
print("Tajik uchun 3")
print("US uchin 4")
print("CHin uchun 5")
print("kaz uchun 6 ni bosing")
try:
	k=int(input("Qayso varutani tanlashiz: "))
	if k==1:
		try:
			print("Siz Rub ni tanladingiz: ")
			m=int(input("PUl miqdori: "))
			if m>0:
				print(mon.rub(m))
			else:
				print("0 dan katta bulishi kerak")
		except:
			print("Son kiritin")
	elif k==2:
		try:	
			print("Siz euro ni tanladiz: ")
			m=int(input("PUl miqdori: "))
			if m>0:
				print(mon.eur(m))
			else:
				print("0 dan katta ")
		except:
			print("Son kiriting: ")
	elif k==3:
		try:
			print("Siz tajik ni tanladiz: ")
			m=int(input("PUl miqdori: "))
			if m>0:
				print(mon.taj(m))
			else:
				print("O dan katta son kiritig: ")
		except:
			print("Son kiritig: ")
	elif k==4:
		try:
			print("Siz US ni tanladiz: ")
			m=int(input("PUl miqdori: "))
			if m>0:
				print(mon.dol(m))
			else:
				print("0 dan katta bulishi kerak")
		except:
			print("Son kiritng: ")
	elif k==5:
		try:
			print("Siz CHin ni tanladiz: ")
			m=int(input("PUl muqdori: "))
			if m>0:
				print(mon.chin(m))
			else:
				 print("0 dan katta bulishi kerak")
		except:
			print("Son liritign : ")
	elif k==6:
		try:
			print("Siz Kaz ni tanladiz: ")
			m=int(input("PUl miqdori: "))
			if m>0:
				print(mon.kaz(m))
			else:
				 print("0 dan katta bulishi kerak")
		except:
			print("Son kiriting: ")
	else:
		print("siz notuqli tanladiz: ")
except:
	print("Xato narsa kirtiing")
