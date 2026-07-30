class circle:
	def __init__(self,raduis,color):
		self.raduis=raduis
		self.color=color
	
	def get_radus(self):
		return self.raduis

	def get_color(self):
		return self.color

	def set_radus(self,m):
		self.raduis=m
		print(f" Yangi radus: {m}")

	def set_color(self,m):
		self.color=m
		print(f"Yangi color: {m}")

	def get_area(self):
		return 3.14*(self.raduis**2)

	def get_circum(self):
		return 2*3.14*self.raduis

if __name__=='__main__':
	ms=list()
	k=float(input("Enter raduis: "))
	s=input("Enter color: ")
	ms.append(circle(k,s))
	for x in range(len(ms)):
		print(f" Radus: {ms[x].get_radus()}  Color: {ms[x].color}")

	a=float(input("Enter new raduis: "))
	b=input("Enter new color: ")
	for x in range(len(ms)):
			ms[x].set_radus(a)
			ms[x].set_color(b)
	for x in range(len(ms)):
		print(ms[x].get_area())
		print(ms[x].get_circum())

