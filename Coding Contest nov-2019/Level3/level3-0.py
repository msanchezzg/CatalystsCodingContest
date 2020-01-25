import math
import collections


def imprimirMatriz():
	for fila in matriz[1:-1]:
		print(fila[1:-1])


def comprobarBorde(x, y, pais):
	#print(str(matriz[x+1][y+1]))
	if(matriz[x+1][y+1] != pais):
		return True
	if(matriz[x+2][y+1] != pais):
		return True
	elif(matriz[x][y+1] != pais):
		return True
	elif(matriz[x+1][y+2] != pais):
		return True
	elif(matriz[x+1][y] != pais):
		return True

	return False


def minimaDistancia(x, y, pais):
	minimaDistancia = 999999999999
	xmin = 999999999999
	ymin = 999999999999

	#print('pais: '+str(pais)+' '+str(x)+','+str(y))
	for i in range(1,filas-1):
		for j in range(1,columnas-1):

			if (matriz[i][j] != pais):
				continue
			elif (comprobarBorde(i, j, pais) == True):
				continue

			dis = (x-i)**2 + (y-j)**2
			dis = math.sqrt(dis)

			#print('\tdistancia: '+str(dis)+' '+str(i)+','+str(j))
			#print('\tminima: '+str(minimaDistancia))
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
				#elif(i<xmin):
						minimaDistancia=dis
						xmin=i
						ymin=j				
				
	#print(str(pais)+' '+str(matriz[xmin][ymin]))
	if(ymin==999999999999):
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
f = [-1]*(filas+2)
matriz.append(f)

for i in range(filas):
		a = input()
		a = a.split()
		a = a[1::2]

		a = [int(x) for x in a]
		for x in a:
			if x not in dicc:
				dicc[x] = [0,0,0]	#[suma de las i, num de elementos, suma de las j]
		
		a = [-1]+a+[-1]

		matriz.append(a)
	

matriz.append(f)
filas+=2
columnas+=2


for fila in range(1,filas-1):
	for casilla in range(1,columnas-1):
		n = matriz[fila][casilla]
		dicc[n][0] += (fila-1)
		dicc[n][1] += 1
		dicc[n][2] += (casilla-1)

for pais in dicc:
	#print('paisssss: '+str(pais)+' '+str(dicc[pais]))
	mediay = dicc[pais][0]/dicc[pais][1]
	mediax = dicc[pais][2]/dicc[pais][1]
	mediax = math.floor(mediax)
	mediay = math.floor(mediay)
	dicc[pais] = [mediax,mediay]
	
	#print(str(pais)+': '+str(dicc[pais]))

	if(comprobarBorde(mediay,mediax,pais) == True):
		#print(str(pais))
		

		res = minimaDistancia(mediay, mediax, pais)
		dicc[pais] = [res[0],res[1]]

	
	#print(str(pais)+'-'+str(comprobarBorde(mediay,mediax,pais))+'---'+str(mediax)+','+str(mediay))


for pais in dicc:
	print(str(dicc[pais][0]) + ' ' + str(dicc[pais][1]))


