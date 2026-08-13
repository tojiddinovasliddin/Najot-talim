from PyQt5.QtGui import *
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
import sys
import json
class project(QMainWindow):
	def __init__(self):
		super().__init__()
		self.setGeometry(20,30,600,600)
		self.setWindowTitle("Employee Management System")
		self.title=QLabel("Employee Management",self)
		self.title.setGeometry(150,30,290,30)
		self.title.setFont(QFont("Calibali",24))
		self.search_first_name=QLineEdit(self)
		self.search_first_name.setGeometry(90,90,340,30)
		self.search_first_name.setPlaceholderText("Enter employee full name")
		self.search_first_name.setStyleSheet("border-radius: 8px;border-style: solid; background-color: rgb(47,79,79);")
		self.btn_search=QPushButton("Search Employee",self)
		self.btn_search.setGeometry(90,130,340,30)
		self.btn_search.setStyleSheet("border-radius: 8px;border-style: solid; background-color: rgb(0,225,255);")
		self.btn_search.clicked.connect(self.search)
		self.full_name=QLineEdit(self)
		self.full_name.setPlaceholderText("Full Name")
		self.full_name.setGeometry(90,170,340,30)
		self.full_name.setStyleSheet("border-radius: 8px;border-style: solid; background-color: rgb(47,79,79);")
		self.age=QLineEdit(self)
		self.age.setValidator(QIntValidator(1,99))
		self.age.setPlaceholderText("Age")
		self.age.setGeometry(90,210,340,30)
		self.age.setStyleSheet("border-radius: 8px;border-style: solid; background-color: rgb(47,79,79);")
		self.phone_number=QLineEdit(self)
		self.phone_number.setPlaceholderText("+998912345678")
		self.phone_number.setGeometry(90,250,340,30)
		self.phone_number.setStyleSheet("border-radius: 8px; border-style: solid; background-color: rgb(47,79,79)")
		self.email_address=QLineEdit(self)
		self.email_address.setPlaceholderText("Email Address")
		self.email_address.setGeometry(90,290,340,30)
		self.email_address.setStyleSheet("border-radius: 8px; border-style: solid; background-color: rgb(47,79,79)")
		self.gender=QComboBox(self)
		self.gender.setGeometry(90,330,340,30)
		self.gender.setStyleSheet("border-radius: 8px; border-style: solid; background-color: rgb(47,79,79)")
		self.gender.addItem("Male")
		self.gender.addItem("Female")
		self.department_name=QComboBox(self)
		self.department_name.setGeometry(90,370,340,30)
		self.department_name.setStyleSheet("border-radius: 8px; border-style: solid; background-color: rgb(47,79,79)")
		self.ms=[]
		with open("ex_2.json","rt") as r:
			s=json.load(r)
			for x in s['departments']:
				self.ms.append(x)
		for x in self.ms:
			self.department_name.addItem(x)
		self.btn_edit = QPushButton("Edit Employee", self)
		self.btn_edit.setGeometry(180,450,150,40)
		self.btn_edit.setStyleSheet("border-radius: 8px;border-style: solid; background-color: rgb(0,225,255);")
		self.btn_edit.clicked.connect(self.edit_user)

	def search(self):
		full_name=self.search_first_name.text()
		with open("ex_2.json","r") as r:
			data=json.load(r)
			cnt=0
			for x in data['employees']:
				if full_name==x['fullname']:
					self.full_name.setText(x['fullname'])
					self.age.setText(str(x['age']))
					self.phone_number.setText(x['phone'])
					self.email_address.setText(x['email'])
					self.gender.setCurrentText(x['gender'])
					self.department_name.setCurrentIndex(x['department_index'])
					cnt+=1
			if cnt==0:
				QMessageBox.warning(self, "Warning", "Employee not found")

	def edit_user(self):
		full_name=self.full_name.text()
		with open("ex_2.json","r") as r:
			data=json.load(r)
			cnt=0
			ms={}
			for x in data['employees']:
				if full_name==x['fullname']:
					ms['fullname']=self.full_name.text()
					ms['age']=int(self.age.text())
					ms['phone']=self.phone_number.text()
					ms['email']=self.email_address.text()
					ms['gender']=self.gender.currentText()
					ms['department_index']=self.department_name.currentIndex()

					data['employees'].remove(x)
					cnt+=1
			data['employees'].append(ms)
			print(ms)

		if cnt==0:
			QMessageBox.warning(self, "Warning", "Employee not found")
		else:
			with open("ex_2.json","w") as w:
				json.dump(data,w)

			QMessageBox.information(self, "Success", "Employee updated")

if __name__=="__main__":
	apps=QApplication([])
	app=project()
	app.show()
	sys.exit(apps.exec_())
