import functools

notas = { 'W':1.0, 'H':1.0/2, 'Q':1.0/4, 'E':1.0/8,
		'S':1.0/16, 'T':1.0/32, 'X':1.0/64 }

while(1):
	linea = input()
	total = 0

	if(linea == '*'):
		break

	lista = linea.split('/')
	lista = [x for x in lista if x]

	for seq in lista:
		suma = 0

		for nota in seq:
			suma += notas[nota]

		if(suma == 1):
			total +=1

	print(total)


