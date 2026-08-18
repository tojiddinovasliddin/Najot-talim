class worker:
	def __init__(self,id,first_name,last_name,salary):
		self.id=id
		self.first_name=first_name
		self.last_name=last_name
		self.salary=salary
	
	def get_id(self):
		return self.id
	def get_first_name(self):
		return self.first_name
	def get_last_name(self):
		return self.last_name
	def name(self):
		return f"{self.last_name} {self.first_name}"
	def get_salary(self):
		return self.salary
	def set_salary(self,m):
		self.salary=m
		print("Xodimning oylkim maoshi uzgardi ")
	def set_percent_salary(self,m):
		self.salary+=self.salary/100*m
		print(f"Xodimning maoshi {self.salary} buldi")
	def get_year_salary(self):
		return self.salary*12


if __name__=="__main__":
	k=int(input("Xodimlar soni: "))
	arr=list()
	for x in range(k):
		id=int(input("Id ni kiriting: "))
		first=input("ISmni kiriting: ")
		last=input("Familasini kiritign: ")
		salary=float(input("Oylik maoshni kiriting: "))
		arr.append(worker(id,first,last,salary))
	for x in range(len(arr)):
		print(f"ID: {arr[x].get_id()} First name: {arr[x].get_first_name()} Last name: {arr[x].get_last_name()}  Full Name: {arr[x].name()}  Salary: {arr[x].salary}")
	a=int(input("Change worker's salary: 1\n increase worker's salay as persent: 2\n worker year's salary: 3\n select: "))
	if a==1:
		cnt=0
		s=input("Xodimning ismni kiriting: ")
		m=float(input("Yangi maoshi: "))
		for x in range(len(arr)):
			if arr[x].get_first_name()==s:
				arr[x].set_salary(m)
				cnt+=1
		if cnt==0:
			print("Ushbu xodim mavjud emas")
	elif a==2:
		cnt=0
		s=input("Xodimning ismni kiriting: ")
		m=float(input("Yangi maoshi foizda: "))
		for x in range(len(arr)):
			if arr[x].get_first_name()==s:
				arr[x].set_percent_salary(m)
				cnt+=1
		if cnt==0:
			print("Bunday user mavjud emas")
	elif a==3:
		s=input("Xodimning ismni kiriting: ")
		for x in range(len(arr)):
			if arr[x].get_first_name()==s:
				print(arr[x].get_year_salary())

	else:
			print("Bunday amal mavjud emas")



