import datetime as dt
k=input("Soatni kiriting: ")
m=input("Soatni kriting: ")
s=dt.datetime.strptime(k,'%d.%m.%Y %H:%M')
e=dt.datetime.strptime(m,'%d.%m.%Y %H:%M')
tot=(e-s)
print(tot)
