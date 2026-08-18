class Task:
	def __init__(self,title,subject,deadline,max_score):
		self.title=title
		self.subject=subject
		self.deadline=deadline
		self.max_score=max_score
	def __str__(self):
		return f"{self.title} | Fan: {self.subject} | Deadline: {self.deadline} | Ball: {self.max_score}"
class TaskManager():
	def __init__(self,):
		self.tasks=[]
	def add_task(self,task_name):
		self.tasks.append(task_name)
		print(f"Vazifa qushildi: {task_name.title}")
	def __len__(self):
		return len(self.tasks)
	def __getitem__(self,n):
		return self.tasks[n]
	def __str__(self):
		ms=''
		for x in self.tasks:
			ms+=str(x)+'\n'
		return ms



if __name__=="__main__":
	task1 = Task("Python OOP Project", "Python","2026-05-20", 100)
	task2 = Task( "Database Design", "SQL","2026-05-22",80)
	task3 = Task("Algorithm Challenge", "DSA", "2026-05-25",120)
	manager=TaskManager()
	manager.add_task(task1)
	manager.add_task(task2)
	manager.add_task(task3)
	print(manager)
	print(len(manager))
	print(manager[1])
