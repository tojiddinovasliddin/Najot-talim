
import random
def buy(ms,ms1):
	a=int(input("Qaysi joyni olmoqchisiz: "))
	for x in ms:	
		if x==a:
			ms.remove(x)
			ms1.append(x)
			return True
			break
		return False
def cancel(check,check1):
	b=int(input("Bilet raqamni kiriting: "))
	if b not in check:
		return False
	check1.append(b)
	return True
def vip(s):
	o=int(input("Qaysi biletni olmoqchisiz: "))
	for x in s:
		if x==o:	
			s.pop(x)
			return True
			break
		return False

k=int(input("Necht oddiy bilet bor: "))
w=int(input("NEchta vip bilet bor: "))
arr=list()
arr1=list()
vips=dict()
vep=dict()
for x in range(k):
	arr.append(random.randint(1,1000))
for x in range(w):
	name=int(random.randint(1,100))
	price=int(random.randint(1000,10000))
	vips[name]={'price':price}
arr2=sorted(arr)
print(f"Odiy biletlar:{arr2}")
print(f"VIP biletlar:{vips}")
print("Bilit sotib olish uchin 1 ni bosing")
print("Agar VIP Biletni sotil olmoqchi uchun 2 ni bosing, lekin vip bilet qaytalib olinmaydi: ")
vip1=list(vips)
s=int(input("Qaysi yunalishi kirmoqchisiz: "))
if s==1:
	buy1=buy(arr2,arr1)
	print(buy1)
	print(f"Qolgan biletlar: {arr2}")
	q=int(input("Agar biletni qaytamoqchi busangiz: 0 ni bosing:"))
	if q==0:
		cancel1=cancel(arr1,arr2)
		print("Bilet qaytalirdi")
		print(arr2)

elif s==2:
	vipss=vip(vips)
	print(vipss)
	print(f"qolgan biletlar:{vips}")
else:
	print("Siz notugri buyliq qildingiz")


