import random
def check(ms):
	cnt=0
	for x in ms:
		if x>0:
			cnt+=1
	return cnt
k=int(input("k ni kiriting: "))
arr=list()
for x in range(k):
	arr.append(random.randint(-50,50))
print(arr)
print("musbat sonlar soni: ",check(arr))

