class Course:
	def __init__(self,title,teacher):
		self.title=title
		self.teacher=teacher
		self.student=[]
	def get_title(self):
		return self.title
	def get_teacher(self):
		return self.teacher
	def enroll(self,student_name):
		if student_name in self.student:
			return False
		else:
			self.student.append(student_name)
			return True 
	def drop(self,student_name):
		if student_name in self.student:
			self.student.remove(student_name)
			return True
		else:
			return False
	def __str__(self):
		return f"Course: {self.get_title()}"

class OnlineCourse(Course):
	def __init__(self,title,teacher,url,max_students):
		super().__init__(title,teacher)
		self.url=url
		self.max_students=max_students
	def enroll(self,student_name):
		if len(self.student)>=self.max_students:
			return False
		return super().enroll(student_name)
	def get_room(self):
		return f"Virtual: {self.url}"

class OfflineCourse(Course):
	def __init__(self,title,teacher,room,capacity):
		super().__init__(title,teacher)
		self.room=room
		self.capacity=capacity
	def enroll(self,student_name):
		if len(self.student)>=self.capacity:
			return False
		else:
 			return super().enroll(student_name)
	def get_room(self):
		return f"Room: {self.room}"
	
if __name__=="__main__":
	o  = OnlineCourse("Python Basics", "Guzal", url="https://nt.uz/py", max_students=2)
	print(o.enroll("Ali"))      # True
	print(o.enroll("Vali"))     # True
	print(o.enroll("Karim"))    # False (to‘ldi)
	print(o.get_room())         # Virtual: https://nt.uz/py

	f = OfflineCourse("Algorithms", "Dilshod", room="B-203", capacity=1)
	print(f.enroll("Soliha"))   # True
	print(f.enroll("Nodir"))    # False
	print(f.get_room())         # Room: B-203
	print(f)
