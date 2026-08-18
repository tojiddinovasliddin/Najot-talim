import random
ms=set()
arr=set()
k=int(input("Ms and Arr setlarni elementlar soni kirititing: "))
for x in range(k):
	ms.add(random.randint(40,90))
	arr.add(random.randint(40,90))
print("set1:",ms)
print("set2:",arr)
for x in ms.copy():
	if x<60:
		ms.remove(x)
for x in arr.copy():
	if x<60:
		arr.remove(x)
ans=ms.intersection(arr)
print(ans)
j=len(ans)
if j>0:
	s=sum(ans)/j
	print(f"Ortacha qiymati: {s:.2l}")
else:
	print("Umimiy elementlar yuq")
