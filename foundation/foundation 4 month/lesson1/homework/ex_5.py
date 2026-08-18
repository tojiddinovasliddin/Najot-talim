class book:
	def __init__(self,name,page_count,price):
		self.name=name
		self.page_count=page_count
		self.price=price
	
	def get_name(self):
		return self.name
	def get_page_count(self):
		return self.page_count
	def get_price(self):
		return self.price
	def set_increase_page(self,m):
		self.page_count+=m
		print("Sahifalar soni uzgardi")
	def set_reduce_price(self,m):
		self.price=self.price*m
		print(f"Kitobnin narxi {self.price} buldi")
	def set_book(self,m):
		s=self.page_count*10
		if s>100:
			self.price=self.price/2
			print("Narx almashdi")
		else:
			print("Narx almashmadi")


if __name__=="__main__":
	k=int(input("Kitoblar soni: "))
	arr=list()
	for x in range(k):
		name=input("Enter name: ")
		page=int(input("Enter page count: "))
		price=float(input("Enter price: "))
		arr.append(book(name,page,price))
	for x in range(len(arr)):
		print(f"Book name: {arr[x].get_name()} Book count: {arr[x].get_page_count()} PRice: {arr[x].get_price()}")
	a=int(input("Sahifalar soni oshirish: 1\n Narxni kamaytirish: 2\n Narxi almashtirish: 3\n select: "))
	if a==1:
		cnt=0
		s=input("Kitob nomi kiriting: ")
		m=float(input("NEchta sahifa qushamoqchiszi: "))
		for x in range(len(arr)):
			if arr[x].get_name()==s:
				arr[x].set_increase_page(m)
				cnt+=1
		if cnt==0:
			print("Ushbu kitob mavjud emas")
	elif a==2:
		cnt=0
		s=input("Kitob nomi: ")
		m=float(input("NEchi koffisent tushurmoqchisiz: "))
		for x in range(len(arr)):
			if arr[x].get_name()==s:
				arr[x].set_reduce_price(m)
				cnt+=1
		if cnt==0:
			print("Bunday kiton yuq")
	elif a==3:
		cnt=0
		s=input("Kitonmi kiriting:")
		k=int(input("Kitob sahifasi: "))
		for x in range(len(arr)):
			if arr[x].get_name()==s:
				arr[x].set_book(k)
				cnt+=1
	else:
			print("Bunday amal mavjud emas")



