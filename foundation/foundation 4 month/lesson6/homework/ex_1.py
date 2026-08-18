from PyQt5.QtGui import *
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
import sys
import json

class project(QMainWindow):
	def __init__(self):
		super().__init__()
		self.setWindowTitle("Valyuta konvertatsiya dasturi")
		self.setGeometry(20,30,600,400)
		
		self.summa=QLabel("So'm miqdorini kiriting: ",self)
		self.summa.setGeometry(20,20,200,50)
		self.sum=QLineEdit(self)
		self.sum.setGeometry(220,30,300,30)

		self.choose=QLabel("Valyutani tanlang: ",self)
		self.choose.setGeometry(20,80,200,50)
		self.chose=QComboBox(self)
		self.chose.setGeometry(220,100,70,30)

		self.btn=QPushButton("hisoblash",self)
		self.btn.setGeometry(200,180,100,50)

		self.result=QLabel("Natija: ",self)
		self.result.setGeometry(20,280,200,50)

		with open("ex_1.json", "rt") as r:
			self.data=json.load(r)
			for x in self.data['valyutalar']:
				self.chose.addItem(x['kod'])

		self.btn.clicked.connect(self.check)
	def check(self):
		try:
			summa=int(self.sum.text())
			kod=self.chose.currentText()
			kurs=0
			for x in self.data['valyutalar']:
				if x['kod']==kod:
					kurs=x['kurs']
			ans=summa/kurs
			self.result.setText(f"Natija: {summa} so'm = {ans} {kod}")
		except:
			self.result.setText("Natija: iltimos, son kiriting!")

if __name__=="__main__":
	apps=QApplication([])
	app=project()
	app.show()
	sys.exit(apps.exec_())
