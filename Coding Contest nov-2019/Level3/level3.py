import math
import collections



def imprimirMatrizNormal():
	for fila in matriz:
		print(fila)


def comprobarBorde(x, y, pais):	
	if (x == 0 or y == 0):
		return True

	if (x == filas-1):
		return True

	if (y == columnas-1):
		return True

	if(matriz[x][y+1] != pais):
		return True
	elif(matriz[x][y-1] != pais):
		return True
	elif(matriz[x+1][y] != pais):
		return True
	elif(matriz[x-1][y] != pais):
		return True

	return False


def minimaDistancia(x, y, pais):
	minimaDistancia = 999999999999
	xmin = 999999999999
	ymin = 999999999999

	for i in range(filas):
		for j in range(columnas):

			if (matriz[i][j] != pais):
				continue
			elif (comprobarBorde(i, j, pais) == True):
				continue

			dis = (x-i)**2 + (y-j)**2
			dis = math.sqrt(dis)

			if (dis<minimaDistancia):
				minimaDistancia=dis
				xmin=i
				ymin=j

			elif(dis==minimaDistancia):
				if(i<xmin):
					minimaDistancia=dis
					xmin=i
					ymin=j

				elif(i==xmin):
					if(j<ymin):
						minimaDistancia=dis
						xmin=i
						ymin=j

	if(ymin == 999999999999):
		return [x,y]

	return [ymin,xmin]



line = input().split()
filas = int(line[0])
columnas = int(line[1])

fila = []
matriz = []
countriesInfoByID = {}

for i in range(filas):
		countriesIDs = input().split()
		countriesIDs = countriesIDs[1::2]
		countriesIDs = [int(x) for x in countriesIDs]
		matriz.append(countriesIDs)

		for pais in countriesIDs:
			if pais not in countriesInfoByID:
				countriesInfoByID[pais] = [0, 0, 0]	# [suma de las i, num de elementos, suma de las j]			
		
		for j in range(columnas):
			n = matriz[i][j]
			countriesInfoByID[n][0] += i
			countriesInfoByID[n][1] += 1
			countriesInfoByID[n][2] += j


for pais in countriesInfoByID:
	mediay = countriesInfoByID[pais][0] / countriesInfoByID[pais][1]
	mediax = countriesInfoByID[pais][2] / countriesInfoByID[pais][1]
	mediax = math.floor(mediax)
	mediay = math.floor(mediay)
	dicc[pais] = [mediax,mediay]

	if(comprobarBorde(mediay, mediax, pais) == True):
		res = minimaDistancia(mediay, mediax, pais)
		countriesInfoByID[pais] = [res[0], res[1]]


for pais in countriesInfoByID:
	print(str(countriesInfoByID[pais][0]) + ' ' + str(countriesInfoByID[pais][1]))


