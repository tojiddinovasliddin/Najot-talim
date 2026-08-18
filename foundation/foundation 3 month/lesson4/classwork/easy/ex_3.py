arr=input().split()
cnt=0
k=input("Qidiroygan son: ")
for x in arr:
	if k==x:
		cnt+=1
		print("Ha,bor ")
		break
if cnt<1:
	print("Bunday son yuq")
