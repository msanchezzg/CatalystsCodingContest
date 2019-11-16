import math


l = input()
l  = l.split()
filas = l[0]
filas = int(filas)
columnas = l[1]
columnas = int(columnas)

fila=[]
matriz=[]
total = 0;
peq = 999999999;
gr = 0;

for i in range(filas):
		a = input()
		a = a.split()

		for n in a:
			n = int(n)
			total+=n
			if (n<peq):
				peq=n
			if (n>gr):
				gr=n


media=total/(filas*columnas)
media = math.floor(media)

print(str(peq) + " " + str(gr) + " " + str(media))