from PyQt5.QtGui import *
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
import sys

class project(QMainWindow):
	def __init__(self):
		super().__init__()
		self.setGeometry(50,150,500,450)
		self.setWindowTitle("Parol Tekshilish")
		self.text=QLabel("Parolingizni kiriting: ",self)
		self.text.setGeometry(30,50,350,20)
		self.text1=QLineEdit(self)
		self.text1.setGeometry(30,80,350,20)
		self.text1.setAlignment(Qt.AlignLeft)
		self.btn=QPushButton(self)
		self.btn.setGeometry(60,120,200,40)
		self.btn.setText("Tekshirish")
		self.parol=QLabel("Natija: Juda zaif (8 tadan kam)",self)
		self.parol.setGeometry(30,150,300,50)
		self.btn.clicked.connect(self.check)
	def check(self):
		lower=0
		upper=0
		digit=0
		belgi=0
		password=self.text1.text()
		if len(password)>=8:
			for x in password:
				if x.islower()==True:
					lower+=1
				elif x.isupper()==True:
					upper+=1
				elif x.isdigit()==True:
					digit+=1
				else:
					belgi+=1
		else:
			self.parol.setText("Parolda kamida 8ta bulishi kerak")

		if lower>=2 and upper>=1 and digit>=2 and belgi>=1:
			self.parol.setText("Stong Parol")
		elif lower>=2 and upper>=1 and digit>=2 and belgi<1:
			self.parol.setText("Sizning parolizda belgi yetishmaypdi")
		elif lower>=2 and upper>=1 and digit<2 and belgi>=1:
			self.parol.setText("Parolda kamida 2 ta raqam bulish shart")
		elif lower>=2 and  upper<1 and digit>=2 and belgi>=1:
			self.parol.setText("Parilda kamida 1 ta katta harf bulishi shart")
		elif lower<2 and upper>=1 and digit>=2 and belgi>=1:
			self.parol.setText("Parolda kamida 2 kichik harf bulishi shart")


if __name__=="__main__":
	apps=QApplication([])
	app=project()
	app.show()
	sys.exit(apps.exec_())



