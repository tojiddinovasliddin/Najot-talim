orders = [
    {"customer": "Ali", "amount": 15000},
    {"customer": "Vali", "amount": 22000},
    {"customer": "Ali", "amount": 8000}
]
arr=dict()
for x in orders:
	cus=x['customer']
	amount=x['amount']
	if cus in arr:
		arr[cus]+=amount
	else:
		arr[cus]=amount
print(f"natija: {arr}")
