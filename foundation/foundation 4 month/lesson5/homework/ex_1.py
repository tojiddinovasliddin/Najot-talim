from PyQt5.QtGui import *
from PyQt5.QtCore import *
from PyQt5.QtWidgets import *
import sys

class calculator(QMainWindow):
	def __init__(self):
		super().__init__()
		self.setGeometry(70,100,220,380)
		self.setWindowTitle("Calculator")
		self.setFont(QFont("New Time Romen",16))

		self.text=QLabel('0',self)
		self.text.setGeometry(180,90,140,100)
		self.text.setAlignment(Qt.AlignLeft)
		self.text.setFont(QFont("New Time Romen",30))

#  THE BUTTON OF FIRST LINE
		self.btn_delete=QPushButton(self)
		self.btn_delete.setGeometry(10,130,40,40)
		self.btn_delete.setText("⬅️")
		self.btn_delete.setStyleSheet("""
		background-color: rgb(105,105,105);
		border-radius: 20px;
		border-width: 8px;
		border-style: solid;""")

		self.btn_c=QPushButton(self)
		self.btn_c.setGeometry(60,130,40,40)
		self.btn_c.setText("C")
		self.btn_c.setStyleSheet("""
		background-color: rgb(105, 105, 105);
		border-radius: 20px;
		border-width: 8px;
		border-style: solid;""")

		self.btn_percent=QPushButton(self)
		self.btn_percent.setGeometry(110,130,40,40)
		self.btn_percent.setText("%")
		self.btn_percent.setStyleSheet("""
		background-color: rgb(105, 105, 105);
		border-radius: 20px;
		border-width: 8px;
		border-style: solid;""")

		self.btn_devision=QPushButton(self)
		self.btn_devision.setGeometry(160,130,40,40)
		self.btn_devision.setText("➗")
		self.btn_devision.setStyleSheet("""
		background-color: rgb(210,105,30);
		border-radius: 20px;
		border-width: 8px;
		border-style: solid;""")

# THE BUTTON OF THE SECOND LINE
		self.btn7=QPushButton(self)
		self.btn7.setGeometry(10,180,40,40)
		self.btn7.setText("7")
		self.btn7.setStyleSheet("""
    		background-color: rgb(105,105,105);
    		border-radius: 20px;
		border-width: 8px;
 	   	border-style: solid;""")

		self.btn8=QPushButton(self)
		self.btn8.setGeometry(60,180,40,40)
		self.btn8.setText("8")
		self.btn8.setStyleSheet("""
		background-color: rgb(105, 105, 105);
	   	border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")
		self.btn9=QPushButton(self)
		self.btn9.setGeometry(110,180,40,40)
		self.btn9.setText("9")
		self.btn9.setStyleSheet("""
	    	background-color: rgb(105, 105, 105);
   		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")
		self.btn_x=QPushButton(self)
		self.btn_x.setGeometry(160,180,40,40)
		self.btn_x.setText("x")
		self.btn_x.setStyleSheet("""
	    	background-color: rgb(210,105,30);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

# THE BUTTON OF THIRD LINE
		self.btn4=QPushButton(self)
		self.btn4.setGeometry(10,230,40,40)
		self.btn4.setText("4")
		self.btn4.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

		self.btn5=QPushButton(self)
		self.btn5.setGeometry(60,230,40,40)
		self.btn5.setText("5")
		self.btn5.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

		self.btn6=QPushButton(self)
		self.btn6.setGeometry(110,230,40,40)
		self.btn6.setText("6")
		self.btn6.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
	    	border-style: solid;""")

		self.btn_minus=QPushButton(self)
		self.btn_minus.setGeometry(160,230,40,40)
		self.btn_minus.setText("-")
		self.btn_minus.setStyleSheet("""
    		background-color: rgb(210,105,30);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

# THE BUTTON OF FOUTH LINE
		self.btn1=QPushButton(self)
		self.btn1.setGeometry(10,280,40,40)
		self.btn1.setText("1")
		self.btn1.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

		self.btn2=QPushButton(self)
		self.btn2.setGeometry(60,280,40,40)
		self.btn2.setText("2")
		self.btn2.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")
	
		self.btn3=QPushButton(self)
		self.btn3.setGeometry(110,280,40,40)
		self.btn3.setText('3')
		self.btn3.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")
	
		self.btn_add=QPushButton(self)
		self.btn_add.setGeometry(160,280,40,40)
		self.btn_add.setText("+")
		self.btn_add.setStyleSheet("""
    		background-color: rgb(210,105,30);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

#THE BUTTON OF FIFTH LINE
		self.btn_or=QPushButton(self)
		self.btn_or.setGeometry(10,330,40,40)
		self.btn_or.setText("⁺⁄₋")
		self.btn_or.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

		self.btn0=QPushButton(self)
		self.btn0.setGeometry(60,330,40,40)
		self.btn0.setText("0")
		self.btn0.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

		self.btn_vergul=QPushButton(self)
		self.btn_vergul.setGeometry(110,330,40,40)
		self.btn_vergul.setText(",")
		self.btn_vergul.setStyleSheet("""
    		background-color: rgb(105, 105, 105);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

		self.btn_equal=QPushButton(self)
		self.btn_equal.setGeometry(160,330,40,40)
		self.btn_equal.setText("=")
		self.btn_equal.setStyleSheet("""
    		background-color: rgb(210,105,30);
    		border-radius: 20px;
    		border-width: 8px;
    		border-style: solid;""")

if __name__=="__main__":
	app=QApplication([])
	apps=calculator()
	apps.show()
	sys.exit(app.exec_())

