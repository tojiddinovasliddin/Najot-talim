import random
k=random.randint(1,100)
cnt=5
while cnt>0:
	s=int(input("Sonni kiriting: "))
	if s==k:
		print(f"Tugri topdigiz; {k},{cnt} urinishda")
		break
	else:
		cnt-=1
		print(f"{cnt} ta urinish qoldi ")
	if k>s:
		print("Siz kiritilgan sondan katta")
	elif k<s:
		print("Siz kiritgan sonndan kichik")
print(k)
