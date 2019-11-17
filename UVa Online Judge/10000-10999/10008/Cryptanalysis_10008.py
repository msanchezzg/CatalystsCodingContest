import collections

casos = int(input())
counter = collections.Counter()

for i in range(casos):
	linea = input()
	linea = list(linea)
	linea = [x for x in linea if x.isalpha()]
	linea = [x.upper() for x in linea]
	counter.update(linea)

ordenado = sorted(counter.items(), key=lambda x: (-x[1], x[0]))
for k, v in ordenado:
	print(k + ' ' + str(v))