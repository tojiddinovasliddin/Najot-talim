import random
def check(ms):
	try:
		print(10/len(ms))
	except:
		print("Soni norga bulish mumkin emas: ")


k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(10,30))
print(arr)
check(arr)
