import json
def check(s):
	with open(s,'rt') as r:
		a=json.load(r)
		ms=list()
		for x in list(a):
			ms.append(x['language'])
		arr=dict()
		for x in ms:
			if x in arr:
				arr[x]+=1
			else:
				arr[x]=1
		print(arr)

k='country.json'
check(k)
