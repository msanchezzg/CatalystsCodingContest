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



#####################       main
l = input()
l = l.split()
filas = l[0]
filas = int(filas)
columnas = l[1]
columnas = int(columnas)

fila = []
matriz = []
dicc = {}

for i in range(filas):
		a = input()
		a = a.split()
		a = a[1::2]

		a = [int(x) for x in a]
		matriz.append(a)

		for pais in a:
			if pais not in dicc:
				dicc[pais] = [0,0,0]	#[suma de las i, num de elementos, suma de las j]			
		
		for j in range(columnas):
			n = matriz[i][j]
			dicc[n][0] += i
			dicc[n][1] += 1
			dicc[n][2] += j


'''
for fila in range(filas):
	for casilla in range(columnas):
		n = matriz[fila][casilla]
		dicc[n][0] += fila
		dicc[n][1] += 1
		dicc[n][2] += casilla
'''

for pais in dicc:
	mediay = dicc[pais][0]/dicc[pais][1]
	mediax = dicc[pais][2]/dicc[pais][1]
	mediax = math.floor(mediax)
	mediay = math.floor(mediay)
	dicc[pais] = [mediax,mediay]

	if(comprobarBorde(mediay,mediax,pais) == True):
		res = minimaDistancia(mediay, mediax, pais)
		dicc[pais] = [res[0],res[1]]


for pais in dicc:
	print(str(dicc[pais][0]) + ' ' + str(dicc[pais][1]))


