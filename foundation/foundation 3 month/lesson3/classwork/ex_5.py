k=input("Paloni kiriting: ")
f=len(k)
katta=0
kichik=0
raqam=0
belgi=0
a=0
while a<f:
	if f<8:
		break
	elif(f>=8):
		if k[a]>='A' and k[a]<='Z':
			katta+=1	
		elif k[a]>='0' and k[a]<='9':
			raqam+=1
		elif k[a] in "@!#%&$":
			belgi+=1
		elif k[a]>='a' and k[a]<='z':
			kichik+=1
	a+=1
if katta>0 and kichik>0 and raqam>0 and belgi>0:
	print("Juda kuchli parol")
elif katta==0:
	print("Katta harf yetamadi")
elif kichik==0:
	print("Kichik harf yetmadi:")
elif raqam==0:
	print("Raqam yetamydi")
elif belgi==0:
	print("BElgi yetmaydi")
