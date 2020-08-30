import math
import collections


line = input().split()
filas = int(line[0])
columnas = int(line[1])

fila = []
matriz = []
countriesBorders = {}

for i in range(filas):
	countriesIDs = input().split()
	countriesIDs = countriesIDs[1::2]
	countriesIDs = [int(x) for x in countriesIDs]

	for country in countriesIDs:
		if country not in countriesBorders:
			countriesBorders[country] = 0

	matriz.append(countriesIDs)
		

for fila in matriz:
	print(fila)

for i in range(1, filas-1):
	for j in range(1, columnas-1):
		n = matriz[i][j]
		
		# izquierda
		m = matriz[i][j-1]
		if(n != m):
			countriesBorders[n] += 1
			continue

		# abajo
		m = matriz[i+1][j]
		if(n != m):
			countriesBorders[n] += 1
			continue

		# derecha
		m = matriz[i][j+1]
		if(n != m):
			countriesBorders[n] += 1
			continue

		# arriba
		m = matriz[i-1][j]
		if(n != m):
			countriesBorders[n] += 1
			continue


for casilla in matriz[0]:	# primera fila
	countriesBorders[casilla] += 1

for casilla in matriz[-1]:	# ultima fila
	countriesBorders[casilla] += 1

for i in range(1, filas-1):
	countriesBorders[matriz[i][0]] += 1	# primera columna
	countriesBorders[matriz[i][-1]] += 1	# ultima columna


countriesBorders = collections.OrderedDict(sorted(countriesBorders.items()))
for countryID, borders in countriesBorders.items():
	print(borders)
	