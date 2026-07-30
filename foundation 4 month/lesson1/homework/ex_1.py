class bank:
	def __init__(self,id,name,balance):
		self.id=id
		self.name=name
		self.balance=balance

	def get_id(self):
		return self.id

	def get_name(self):
		return self.name

	def get_balance(self):
		return self.balance

	def set_in(self,m):
			self.balance+=m
			print('pul qushildi')
			print(f"Usernining yangi balance: ${self.balance}")

	def set_out(self,m):
			if self.balance>=m:
				self.balance-=m
				print(f"pul yechildi va hisobida ${self.balance} mablag qoldi")

			else:
				print(f"Sizning balansizdan ${m-self.balance} pul miqori yetmadi")
	def set_tran(self,a,m):
			if self.balance>=m:
				self.balance-=m
				a.balance+=m
				print(f"${m} utkazildi: ")
			else:
				print("Pul utkazishda muamo bor")



if __name__=='__main__':
	a=1
	accounts=[]
	while a==1:
		name=input("Ismi kiriting: ")
		id=int(input("ID ni kirititing: "))
		balance=float(input("Balanceni kiriting: $"))
		a=int(input("Add new: 1\n Exit:2\n Select: "))
		accounts.append(bank(id,name,balance))
		if a==2:
			break
	for x in range(len(accounts)):
		print(f"ID: {accounts[x].get_id()} --- Name: {accounts[x].get_name()} --- Balance: ${accounts[x].get_balance()}")
	e=int(input("Pul kiritish: 1\n Pul chiqarish: 2\n Pulni otkazish; 3\n Select: "))
	if e==1:
		cnt=0
		s=input("Qaysi userga pul qushmoqchisiz: ")
		n=float(input("Qancha pul kiritmoqchisiz: "))
		for x in range(len(accounts)):
			if accounts[x].get_name()==s:
				accounts[x].set_in(n)
				cnt+=1
		if cnt==0:
			print("Bunday foydananuvchi mavjud emas")
	elif e==2:
		cnt=0
		d=input("Qaysi userdan pul yechmoqchsizi: ")
		f=float(input("Qancha miqdorda: "))
		for x in range(len(accounts)):
			if accounts[x].get_name()==d:
				accounts[x].set_out(f)
				cnt+=1
		if cnt==0:
			print("Bunday user mavjud emas")
	elif e==3:
		cnt=0
		r=input("Qaysi userdan utkazasiz: ")
		t=input("Qaysi userga utkazasiz: ")
		u=float(input("Qancha pul moqdorki utkazmochisiz: "))
		for x in range(len(accounts)):
			for y in range(len(accounts)):
				if accounts[x].get_name()==r and accounts[y].get_name()==t:
					accounts[x].set_tran(accounts[y],u)
					cnt+=1
			if cnt==0:
				print("Foydalanuvchi topilmadi")

	else:
		print("notugri kiriting")


