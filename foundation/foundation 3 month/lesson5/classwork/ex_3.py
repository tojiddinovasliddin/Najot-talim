k=int(input("Nechta ism kiritmoqchisiz: "))
ms=set()
for x in range(1,k+1):
    s=input(f"{x} chi ismni kiriting: ")
    if s in ms:
        print("Bu ism ro'yxatda bor!")
    else:
        ms.add(s)
print(ms)
