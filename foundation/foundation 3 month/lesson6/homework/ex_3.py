employees = {
    "101": "Ali",
    "102": "Bobur",
    "103": "Madina"
}
k=input("ID ni kiriting: ")
if k in employees:
	employees.pop(k)
	print("Xodim uchirildi")
	print(employees)
else:
	print("Bunday id toplimadi")
