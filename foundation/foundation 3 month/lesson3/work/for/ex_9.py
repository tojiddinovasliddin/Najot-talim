total=0
for x in range(1,500,2):
	total+=x

print(total)
if str(total)==str(total)[::-1]:
	print("True")
else:
	print("False")
