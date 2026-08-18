import ex_6lib as mat
try:
	k=int(input("Radusni kriting: "))
	print(mat.uch(k))
except:
	print("Son kiritng ")
try:
	a=int(input("A  ni kiriting: "))
	b=int(input("B ni kiritng: "))
	print(mat.tort(a,b))
except:
	print("Son kiritng")
