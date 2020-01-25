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
#f=[-1]*(filas+2)
#matriz.append(f)


for i in range(filas):
		a = input()
		a = a.split()
		a = a[1::2]
		a = [int(x) for x in a]

		for x in a:
			if x not in dicc:
				dicc[x]=0

		#a = [-1]+a+[-1]

		matriz.append(a)
		

#matriz.append(f)
#filas+=2
#columnas+=2

for fila in matriz:
	print(fila)

for i in range(1,filas-1):

	for j in range(1,columnas-1):
		n = matriz[i][j]
		
		#izquierda
		m=matriz[i][j-1]
		if(n != m ):
			dicc[n]+=1
			continue

		#abajo
		m=matriz[i+1][j]
		if(n != m ):
			dicc[n]+=1
			continue

		#derecha
		m=matriz[i][j+1]
		if(n != m ):
			dicc[n]+=1
			continue

		#arriba
		m= matriz[i-1][j]
		if(n != m ):
			dicc[n]+=1
			continue


for casilla in matriz[0]:	#primera fila
	dicc[casilla]+=1

for casilla in matriz[-1]:	#ultima fila
	dicc[casilla]+=1

for i in range(1,filas-1):
	dicc[matriz[i][0]]+=1	#primera columna
	dicc[matriz[i][-1]]+=1	#ultima columna



dicc = collections.OrderedDict(sorted(dicc.items()))
for k,v in dicc.items():
	print (v)
	