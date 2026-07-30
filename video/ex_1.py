class rectangle:
	def __init__(self,width,height):
		self.width=width
		self.height=height
	def gets(self,width):
		return width
	def set(self,width):
		if self.width<0:
			print("Width musbat bo'lishi kerak!")
if __name__=="__main__":
	r=rectangle(-12,5)
	print(r.width)
