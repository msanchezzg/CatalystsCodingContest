import math


l = input().split()
filas = l[0]
filas = int(filas)
columnas = l[1]
columnas = int(columnas)

fila = []
matriz = []
total = 0;
minHeight = 999999999;
maxHeight = 0;

for i in range(filas):
		a = input().split()

		for n in a:
			n = int(n)
			total += n
			if (n < minHeight):
				minHeight = n
			if (n > maxHeight):
				maxHeight = n


avgHeight = total / (filas*columnas)
avgHeight = math.floor(avgHeight)

print(str(minHeight) + " " + str(maxHeight) + " " + str(avgHeight))