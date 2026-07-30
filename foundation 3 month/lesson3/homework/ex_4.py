a=input("Harfni kiriting: ")
k=ord(a)
if(k>=97 and k<=122):
	d=k-32
	print(chr(d))
elif(k>=65 and k<=90):
	print(a)
else:
	print("Bunday harf yuq") 
