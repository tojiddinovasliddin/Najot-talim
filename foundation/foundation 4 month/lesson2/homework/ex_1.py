class User:
	def __init__(self,name,email,address):
		self.name=name
		self.email=email
		self.address=address
	def get_name(self):
		return self.name
	def get_email(self):
		return self.email
	def get_address(self):
		return self.address
	def set_address(self,new_address):
		self.address=new_address
	def __str__(self):
		return f"User:{self.name}---->email:{self.email}"

class Customer(User):
	def __init__(self,name,email,address,balance=0):
		super().__init__(name,email,address)
		self.cart=[]
		self.balance=balance
	def add_to_cart(self,product,qty,price):
		if qty>0 and price>=0:
			self.cart.append((product,qty,price))
	def clear_cart(self):
		self.cart.clear()
	def get_cart_total(self):
		total=0
		for products,qty,price in self.cart:
			total+=qty*price
		return total
	def checkout(self):
		total=self.get_cart_total()
		if self.balance>=total:
			self.balance-=total
			return True
		else:
			return False
	def __str__(self):
		return f"Customer: {self.get_name()} -----> balance: {self.balance}"

class Seller(User):
	def __init__(self,name,email,address,rating):
		super().__init__(name,email,address)
		self.rating=rating
		self.products={}

	def add_product(self,name,qty):
		if qty>0:
			if name in self.products:
				self.products[name]+=qty
			else:
				self.products[name]=qty
	def remove_product(self,name):
		if name in self.products.key():
			self.products.pop(name)
			return True
		else:
			return False

	def update_stock(self,name,delta_qty):
		if name not in self.products:
			return False
		new=self.products[name]+delta_qty
		if new<0:
			return False
		self.products[name]=new

	def get_stock(self):
		ms=[]
		ms=self.products.copy()
		return ms
	def __str__(self):
		return f"Seller: {self.name} Rating: {self.rating} Items:{self.products.values()}"

if __name__=="__main__":
	c = Customer("Ali", "ali@mail.com", "Toshkent", balance=2_000_000)
	c.add_to_cart("Keyboard", 1, 300_000)
	c.add_to_cart("Mouse", 2, 150_000)
	print(c.get_cart_total())     # 600000
	print(c.checkout())           # True
	print(c)                      # Customer: Ali (balance: 1400000 so‘m)

	s = Seller("Gulbahor", "g@mail.com", "Samarqand", rating=4.8)
	s.add_product("Keyboard", 10)
	s.update_stock("Keyboard", -3)
	print(s.get_stock())          # {'Keyboard': 7}
	print(s)                      # Seller: Gulbahor (rating: 4.8, items: 7)
