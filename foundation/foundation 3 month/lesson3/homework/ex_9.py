a=int(input("A ni kriting: "))
b=int(input("B ni kiriting: "))
while a <= b:
	cnt = 0
	for x  in range(1,a + 1):
		if a % x == 0:
			cnt += 1
	if cnt == 2:
		print(a,end = ",")
	a += 1
