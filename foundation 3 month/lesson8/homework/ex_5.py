def newdict(s):
	arr=dict()
	for x in range(s):
		name=input("Food nomi: ")
		price=int(input("Food narxi: $"))
		arr[name]=price
	return arr

def check(ms,name):
	s=0
	amount=int(input("nechi porsa va kamida 1 poras kiritivng kerak: "))
	for x in ms:
		if x==name:
			return ms[name]*amount

k=int(input("K ni kiriting: "))
arr=newdict(k)
print(arr)
tot=0
while True:
	c=input("Nima buyurma bermoqchimisz: ")
	if c in arr:
		s=check(arr,c)
		tot+=s
		j=input("Yana taom buyurma bermoqchimisz: ")
		if j=="Ha":
			continue
		elif j=="Yuq":
			break
	else:
		print("Bunday taom mavjud emas menu yaxshilab kuring: ")
print(f"Jami xarajad chegirmasiz: {tot}")
if  tot>100:
	print("Sizda 20% chegirma bor")
	a=tot-tot/5
	print(f"Chegirmadan keyin: ${a}")
elif tot >50 and tot <100:
	print("Sizda 10% chegirma bor")
	b=tot-tot/10
	print(f"Chegirmadam keyin: ${b}")
else:
	print("Sizda 5% chegirma bor: ")
	w=tot-tot/20
	print(f"CHegirmadan ketin: ${w}")

