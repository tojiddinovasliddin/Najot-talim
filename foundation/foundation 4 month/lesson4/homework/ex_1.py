from abc import ABC,abstractmethod
class Employee(ABC):
	def __init__(self,name,salary):
		self.name=name
		self.salary=salary
	@abstractmethod
	def get_details(self):
		pass
	@abstractmethod
	def calculate_bonus(self):
		pass
class Manager(Employee):
	def __init__(self,name,salary,department):
		super().__init__(name,salary)
		self.department=department
	def get_details(self):
		print(f"Manager: {self.name}, Department: {self.department}, Salary: {self.salary}")
	def calculate_bonus(self):
		tot=self.salary/10
		print(f"Manager uchun bonud: {tot}")

class Developer(Employee):
	def __init__(self,name,salary,programming_language):
		super().__init__(name,salary)
		self.programming_language=programming_language
	def get_details(self):
		print(f"Devoper: {self.name}, Programming Language: {self.programming_language}, Salary: {self.salary}")
	def calculate_bonus(self):
		print(f"Developer uchun bonus: {self.salary/20}")
if __name__=="__main__":
	manager=Manager(name="Alice",salary=120000, department="Sales")
	developer=Developer(name="Bob", salary=100000, programming_language= "Python")
	manager.get_details()
	developer.get_details()
	manager.calculate_bonus()
	developer.calculate_bonus()
