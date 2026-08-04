class Book:
	def __init__(self,title,author,year):
		self.title=title
		self.author=author
		self.year=year
	def __str__(self):
		return f"{self.title} | {self.author} | {self.year}"
	def __eq__(self,other):
		return self.title==other.title
class Library:
	def __init__(self):
		self.book=[]
	def add_book(self,new_book):
		self.book.append(new_book)
		print(f"kitob qushirdi:{new_book.title}")
	def __contains__(self,book):
		if book in self.book:
			return True
		else:
			return False
	def __getitem__(self,index):
		return self.book[index]
	def __str__(self):
		ms=''
		for x in self.book:
			ms+=str(x)+'\n'
		return ms
if __name__=="__main__":
	book1 = Book ("Atomic Habits", "James Clear", 2018)
	book2 = Book("Python Basics", "Ali Karimov", 2025)
	book3 = Book ("Clean Code", "Robert Martin", 2008)
	book4 = Book ("Atomic Habits", "Unknown",2026)
	library = Library()
	library.add_book(book1)
	library.add_book(book2)
	library.add_book(book3)
	print(book1 == book4)
	print(book4 in library)
	print(library[0])
	print(library)
