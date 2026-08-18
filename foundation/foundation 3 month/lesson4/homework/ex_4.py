arr=[
    [2, 15, 4],
    [19, 24, 11],
    [7, 9, 5],
    [10, 3, 1]
]
print(arr)
for x in arr:
	for j in range(len(x)):
		if j%2==1:
			x[j]=x[j]**2
print("\t\t-------------------Natija----------------")
print(arr)
