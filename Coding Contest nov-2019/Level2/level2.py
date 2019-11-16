import math
import collections


l = input()
l  = l.split()
filas = l[0]
filas = int(filas)
columnas = l[1]
columnas = int(columnas)


fila=[]
matriz=[]
dicc={}
f=[-1]*(filas+2)
matriz.append(f)

for i in range(filas):

		a = input()
		a = a.split()
		a = a[1::2]
		a = [int(x) for x in a]

		for x in a:
			if x not in dicc:
				dicc[x]=0

		a = [-1]+a+[-1]

		matriz.append(a)
		

matriz.append(f)
filas+=2
columnas+=2

#for fila in matriz:
#	print(fila)

for fila in range(1,filas-1):

	for casilla in range(1,columnas-1):
		n = matriz[fila][casilla]
		
		#izquierda
		m=matriz[fila][casilla-1]
		if(n != m ):
			dicc[n]+=1
			continue

		#abajo
		m=matriz[fila+1][casilla]
		if(n != m ):
			dicc[n]+=1
			continue

		#derecha
		m=matriz[fila][casilla+1]
		if(n != m ):
			dicc[n]+=1
			continue

		#arriba
		m= matriz[fila-1][casilla]
		if(n != m ):
			dicc[n]+=1
			continue



dicc = collections.OrderedDict(sorted(dicc.items()))
for k,v in dicc.items():
	print (v)
	