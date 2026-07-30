def add(flname):
	with open(flname,'at') as a:
		n=int(input("nechta kon kiritasan: "))
		for x in range(n):
			name=input("Ismi kiritng: ")
			num=input("tel numni kiriting: ")
			a.write(name+ ' '+ num+'\n')
		print("Kon kiritildi")

def alls(flname):
	with open(flname,'rt') as r:
		m=r.readlines()
		for x in m:
			print(x)

k=input("Fayl nomi: ")
print("1--kontakt qushish")
print("2--Barcha kontakt kurish")
print("3--tugatish dasturni")
s=int(input("qaysi bilin tanlausiz: "))
if s==1:
	add(k)
elif s==2:
	alls(k)
elif s==3:
	print("dastur tugatildi")
else:
	print("Notugli kirilding")
