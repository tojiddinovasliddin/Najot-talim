
k=int(input("\t\tSet1 ga nechta elemnetn  kiritmowchisiz: "))
set1=set()
for x in range(1,k+1):
	s=input(f"{x} chi elementni kiriting: ")
	set1.add(s)
j=int(input("\t\tSet2 ga nechta element kirtimoqchisiz: "))
set2=set()
for x in range(1,j+1):
	m=input(f"{x} ni elelemtni kiriting: ")
	set2.add(m)
a=int(input("\t\tSet3 ga nechta element kiritmoqchisiz: "))
set3=set()
for x in range(1,a+1):
	e=input(f"{x} ni elementni kiriting: ")
	set3.add(e)
print(set1)
print(set2)
print(set3)
natija=set1.intersection(set2)
ans=natija.difference(set3)
print(ans)

