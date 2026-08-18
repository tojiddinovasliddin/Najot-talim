k=int(input("K ni kiriting: "))
arr=dict()
for x in range(1,k+1):
	name=input("Kompaniya nomi: ")
	price=int(input("Kapitalini kiriting: "))
	arr[name]=price
print(arr)
names=None
maxi=max(arr.values())
for x in arr:
	if arr[x]==maxi:
		names=x
		break
print(f"Eng boy kompiniya {names} kapitali: {maxi}")
