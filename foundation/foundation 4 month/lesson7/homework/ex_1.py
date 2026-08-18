from PyQt5.QtGui import *
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
import sys
import json
class project(QMainWindow):
	def __init__(self):
		super().__init__()
		self.setGeometry(20,30,600,800)
		self.setWindowTitle("Sevimli mashg'ulotlar")

		self.first_name=QLabel("Name ",self)
		self.first_name.setGeometry(20,30,150,50)
		self.first_name.setFont(QFont("Calibri",20))

		self.first=QLineEdit(self)
		self.first.setGeometry(20,90,550,50)
		self.first.setFont(QFont("Calibri",20))

		self.age=QLabel("Age",self)
		self.age.setGeometry(20,150,150,50)
		self.age.setFont(QFont("Calibri",20))

		self.ages=QLineEdit(self)
		self.ages.setGeometry(20,210,550,50)
		self.ages.setFont(QFont("Calibri",20))

		self.like=QLabel("Sevimli mashqulotlar",self)
		self.like.setGeometry(20,270,550,50)
		self.like.setFont(QFont("Calibri",20))

		self.football=QCheckBox("Football",self)
		self.football.setGeometry(20,320,500,20)
		self.football.setFont(QFont("Times New Roman",16))
		self.read_book=QCheckBox("Read books",self)
		self.read_book.setGeometry(20,340,500,20)
		self.read_book.setFont(QFont("Times New Roman",16))
		self.music=QCheckBox("Music",self)
		self.music.setGeometry(20,360,500,20)
		self.music.setFont(QFont("Times New Roman",16))
		self.draw_picture=QCheckBox("Draw picture",self)
		self.draw_picture.setGeometry(20,380,500,20)
		self.draw_picture.setFont(QFont("Times New Roman",16))
		self.travel=QCheckBox("Travelling",self)
		self.travel.setGeometry(20,400,500,20)
		self.travel.setFont(QFont("Times New Roman",16))

		self.gender=QLabel("Gender",self)
		self.gender.setGeometry(20,430,500,50)
		self.gender.setFont(QFont("Calibri",20))
	

		self.male=QRadioButton("Male",self)
		self.male.setFont(QFont("Times New Roman",16))
		self.male.setGeometry(20,490,90,50)
		self.female=QRadioButton("Female",self)
		self.female.setFont(QFont("Time New Roman",16))
		self.female.setGeometry(400,490,150,50)

		self.btn_add=QPushButton("Add",self)
		self.btn_add.setFont(QFont("Calibri",24))
		self.btn_add.setGeometry(200,550,90,50)
		self.btn_add.clicked.connect(self.add_user)
		
		self.result=QLabel(" ",self)
		self.result.setGeometry(40,620,400,150)


	def add_user(self):
		first_name=self.first.text()
		age=self.ages.text()
		ms=[]
		if self.football.isChecked()==True:
			ms.append(self.football.text())
		if self.read_book.isChecked()==True:
			ms.append(self.read_book.text())
		if self.music.isChecked()==True:
			ms.append(self.music.text())
		if self.draw_picture.isChecked()==True:
			ms.append(self.draw_picture.text())
		if self.travel.isChecked()==True:
			ms.append(self.travel.text())
		gender=None
		if self.male.isChecked()==True:
			gender=self.male.text()
		if  self.female.isChecked()==True:
			gender=self.female.text()
		if len(first_name)==0 or age.isdigit()==False or len(ms)==0 or gender==None:
			msg = QMessageBox()
			msg.setFont(QFont("Calibri",18))
			msg.setIcon(QMessageBox.Critical)
			msg.setText("Xato kiritingiz")
			msg.exec_()
		else:
			self.result.setText(f"""
Name: 		{first_name}
Age: 		{age}
Hobbies: 	{ms}
Gender: 	{gender}
""")

if __name__=="__main__":
	apps=QApplication([])
	app=project()
	app.show()
	sys.exit(apps.exec_())
