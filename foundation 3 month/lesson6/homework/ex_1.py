grade = {"Ali": 85,"Vali": 78, "Hasan": 90}
name=input("Foydalanuvchi nomi: ")
mark=int(input("Yangi baxoni kiriting: "))
cnt=0
for x in grade:
	if x==name:
		grade[x]=mark
		cnt+=1
if cnt==0:
	print("Bunday talaba topilmadi")
else:
	print(grade)

