fichero = open('level1-3.txt', 'r')
lectura = fichero.read()
lectura = lectura.split('\n')
if '' in lectura:
	lectura.remove('')
lectura.pop(0)

viaje_hyperloop = lectura.pop()
viaje_total = lectura.pop()

lista_ciudades = []
for ciudad in lectura:
	coordenadas = []
	c = ciudad.split(' ')
	coordenadas.append(c[0])
	coordenadas.append(c[1])
	coordenadas.append(c[2])
	lista_ciudades.append(coordenadas)

viaje = viaje.split(' ')

A = viaje[0] 
B =	viaje[1]

for ciudad in lista_ciudades:
	if ciudad[0] == A:
		ciudad_A = [int(ciudad[1]), int(ciudad[2])]
	elif ciudad[0] == B:
		ciudad_B = [int(ciudad[1]), int(ciudad[2])]

print(ciudad_A, ciudad_B)
cateto1 = (ciudad_A[0] - ciudad_B[0])**2
cateto2 = (ciudad_A[1] - ciudad_B[1])**2
h = (cateto1 + cateto2)**0.5
res = round(h/250 + 200)

print(res)
