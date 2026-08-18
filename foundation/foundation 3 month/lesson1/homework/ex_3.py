def check(s):
	if ord(s)>=97 and ord(s)<=122:
		if ord(s)>=97 and ord(s)<=99:
			print('a')
		elif  ord(s)>=100 and ord(s)<=103:
			print('e')
		elif ord(s)>=104 and ord(s)<=108:
			print('i')
		elif ord(s)>=109 and ord(s)<=114:
			print('o')
		else:
			print('u')


	else:
		print("Faqad kichik harf bulishi kerak")


k=input("Harfni kiriting: ")
check(k)
