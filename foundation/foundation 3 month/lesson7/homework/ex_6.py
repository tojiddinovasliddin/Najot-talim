def check(s):
	if s==s[::-1]:
		return "YEs"
	else:
		return "No"
k=input("Satrn kiriting: ")
ans=check(k)
print(ans)
