class Library:
	def __init__(self,book):
		self.book=book
	def add_book(self,book_name):
		self.book.append(book_name)
	def __len__(self):
		return len(self.book)
	def __str__(self):
		return f"Kitobxonada  {len(self.book)} ta kitob bor"

if __name__=='__main__':
	lib=Library(["Python Asosslar","suniy intellekt"])
	print(len(lib))
	lib.add_book("malumotlar bazasi")
	print(len(lib))
	print(lib)
