import random
class date:
	def __init__(self,day,month,year):
		self.day=day
		self.month=month
		self.year=year
	def get_day(self):
		return self.day
	def get_month(self):
		return self.month
	def get_year(self):
		return self.year
	def set_day(self,m):
		self.day=m
		print("Kun uzgardi")
	def set_month(self,m):
		self.month=m
		print("Oy uzgardi")
	def set_year(self,m):
		self.year=m
		print("Yil uzgardi")
	def set_date(self,d,m,y):
		self.day=d
		self.month=m
		self.year=y
		print("Sana uzgradi")

if __name__=='__main__':
	ms=list()
	d=random.randint(1,31)
	m=random.randint(1,12)
	y=random.randint(1900,9999)
	ms.append(date(d,m,y))
	for x in range(len(ms)):
		print(f"{ms[x].get_day()}.{ms[x].get_month()}.{ms[x].get_year()}")
	a=int(input("change day:1\n change month:2\n change year:3\n change date:4\n Select: "))
	if a==1:
		e=random.randint(1,31)
		for x in range(len(ms)):
			ms[x].set_day(e)

	elif a==2:
		e=random.randint(1,12)
		for x in range(len(ms)):
			ms[x].set_month(e)

	elif a==3:
		e=random.randint(1900,9999)
		for x in range(len(ms)):
			ms[x].set_year(e)

	elif a==4:
		i=random.randint(1,31)
		o=random.randint(1,12)
		e=random.randint(1900,9999)
		for x in range(len(ms)):
			ms[x].set_date(i,o,e)

	else:
		print("Bunday qiymt yuq")
