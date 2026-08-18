import json
def check(s):
	with open(s,'rt') as r:
		a=json.load(r)
		arr=dict()
		for x in a:
			country=x['country']
			language=x['language']
			arr[country]=language
		m=sorted(arr.items(),key=lambda x: x[1])
		print(m)
k="country.json"
check(k)
