from abc import ABC, abstractmethod
class Employee(ABC):
	def __init__(self,name,base_salary):
		self._name=name
		self._base_salary=base_salary
	@abstractmethod
	def salary(self):
		pass

class FullTimeEmployee(Employee):
	def __init__(self,name,base_salary):
		super().__init__(name,base_salary)
	def salary(self,bonus):
		k=self._base_salary+bonus
		print(f"Bonus bilan bilga: {k}")
class PartTimeEmployee(Employee):
	def __init__(self,name,hour,pay):
		super().__init__(name,0)
		self.hour=hour
		self.pay=pay
	def salary(self):
		k=self.pay*self.hour
		print(f"{self.hour} soatga {k} oylik")

if __name__=="__main__":
	FTE=FullTimeEmployee("Umed",100)
	FTE.salary(12)
	PTE=PartTimeEmployee("Umed",100,12)
	PTE.salary()
