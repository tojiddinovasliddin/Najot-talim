class Person:
	def __init__(self,name,id_number):
		self.name=name
		self.id_number=id_number
	def get_name(self):
		return self.name
	def get_id(self):
		return self.id_number
	def __str__(self):
		return f"Person: {self.name} ({self.id_number})"

class Patient(Person):
	def __init__(self,name,id_number):
		super().__init__(name,id_number)
		self.diagnoses=[]
		self.bill=0
	def add_diagnosis(self,text):
		self.diagnoses.append(text)
	def add_charge(self,amount):
		if amount<=0:
			print("Xato")
		else:
			self.bill+=amount
	def pay(self,amount):
		if amount>0:
			if amount>=self.bill:
				self.bill=0
			else:
				self.bill-=amount
	def get_balance(self):
		return self.bill
	def print_history(self):
		print(f"{self.diagnoses} joriy qarzdorlik: {self.bill} sum")
class Doctor(Person):
	def __init__(self,name,id_number,specialty):
		super().__init__(name,id_number)
		self.specialty=specialty
		self.schedule={}
	def add_slot(self,day,time):
		if day not in self.schedule.keys():
			self.schedule[day]=[]
		if time not in self.schedule.values():
			self.schedule[day].append(time)
	def book_slot(self,day,time):
		if day in self.schedule.keys():
			self.schedule.pop(day)
			return True
		if time in self.schedule.values():
			self.schedule.pop.values(day)
			return True
		else:
			return False
	def available_slots(self,day):
		ms=[]
		ms=self.schedule.copy()
		return ms
	def __str__(self):
		return f"Dr {self.name} ({self.specialty})"

if __name__=="__main__":
	p = Patient("Aziz", "AB1234567")
	p.add_diagnosis("ORVI")
	p.add_charge(150_000)
	p.add_charge(80_000)
	print(p.get_balance())  # 230000
	p.pay(100_000)
	print(p.get_balance())  # 130000
	p.print_history()

	d = Doctor("Gulrux", "CD7654321", specialty="Cardiologist")
	d.add_slot("Mon", "09:00")
	d.add_slot("Mon", "09:30")
	print(d.book_slot("Mon", "09:00"))  # True
	print(d.book_slot("Mon", "09:00"))  # False
	print(d.available_slots("Mon"))     # ["09:30"]
	print(d) # Dr.Gulrux (Cardiologist)
