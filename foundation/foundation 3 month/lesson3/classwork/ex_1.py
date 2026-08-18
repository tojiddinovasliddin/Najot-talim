a=int(input("Yoshingizni kiriting: "))
b=input("Film nominu kiriting: ")
if a<12:
	print(f"{a} yoshli uchun Animation yoki oila jarni tavsiya etamiz")
elif a>=12 and a<18:
	print(f"{a} yoshli uchun Action yoki Sarguzasht tavsiya etamiz")
elif(a>=18 and a<60):
	print(f"{a} yoshli uchun Drama yoki Komediya tavsiya etamiz")
elif a>=60:
	print(f"{a} yoshli uchun Dokumental yoki Klassik tavsiya etamiz")
