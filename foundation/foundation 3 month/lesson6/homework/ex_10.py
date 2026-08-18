products = {
    "Laptop": 700,
    "Mouse": 25,
    "Phone": 350,
    "Camera": 500,
    "Keyboard": 45
}
arr=dict()
for x in products:
	if products[x]<100:
		arr[x]=products[x]
print(arr)
