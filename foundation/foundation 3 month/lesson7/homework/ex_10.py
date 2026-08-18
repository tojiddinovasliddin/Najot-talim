import random
def check(ms):
	tot=0
	for x in ms:
		if x %2==0:
			tot+=x
	return tot

k=int(input("K ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(10,99))
print(arr)
print("Juft sonlar yigidisi: ",check(arr))
