from abc import ABC,abstractmethod
class Divice(ABC):
	def __init__(self):
		self._is_on=False
	@abstractmethod
	def turn_on(self):
		pass
	@abstractmethod
	def turn_off(self):
		pass
class SmartLamp(Divice):
	def __init__(self):
		super().__init__()
	def turn_on(self):
		self._is_on=True
		print("Yongi")
	def turn_off(self):
		print("Uchdi")
class SmartAC(Divice):
	def __init__(self):
		 super().__init__()
	def turn_on(self):
		self._is_on=True
		print("Yongi")
	def turn_off(self):
		print("Uchdi")

class SmartDoorLock(Divice):
	def __init__(self):
		 super().__init__()
	def turn_on(self):
		self._is_on=True
		print("Yongi")
	def turn_off(self):
		print("Uchdi")

if __name__=="__main__":
	sl=SmartLamp()
	sl.turn_off()
	sa=SmartAC()
	sa.turn_on()
	sdl=SmartDoorLock()
	sdl.turn_off()
