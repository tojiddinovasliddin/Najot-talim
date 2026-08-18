import random
k=int(input("K ni kiriting: "))
arr=[]
total=0
for x in range(k):
	arr.append(random.randint(1,100))
for x in arr:
	print(x,end=" ")
for x in arr:
	total+=x

s=total/k
print("")
print(f"Ortacha qiymati: {s:.2f}")
