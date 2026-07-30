prices = {
    "HP":540,
    "Laptop": 700,
    "Phone": 350,
    "Camera": 500
}
max=max(prices.values())
print(max)
thing=None
for x in prices:
	if prices[x]==max:
		thing=x
		break
print(f"Eng qimmat mahsulot {x} va narxi {max}")
