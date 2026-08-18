k=int(input("Dic 1 elemenlar soni: "))
arr=dict()
for x in range(k):
	name=input("Nomi kiriting: ")
	mark=int(input("Ballni kiriting: "))
	arr[name]=mark
s=int(input("Dic 2 elem soni: "))
ms=dict()
for x in range(s):
	name=input("Nomi kiriting: ")
	mark=int(input("Ballni kiriting: "))
	ms[name]=mark
print(arr)
print(ms)
tot=dict()
tot=arr.copy()
for x in ms:
	if x in tot:
		tot[x]+=ms[x]
	else:
		tot[x]=ms[x]
print(tot)
