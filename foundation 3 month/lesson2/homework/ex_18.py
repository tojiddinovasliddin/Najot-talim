a = int(input("Pul miqdorini kiriting: "))
b = a // 10000
a = a % 10000
c = a // 5000
a = a % 5000
d = a // 2000
a = a % 2000
f = a // 500

print(f"{b} dona 10000 somlik")
print(f"{c} dona 5000 somlik")
print(f"{d} dona 2000 somlik")
print(f"{f} dona 500 somlik")
