
def distancia(ciu_A, ciu_B):
	restaX = int(ciu_A[1]) - int(ciu_B[1])
	restaY = int(ciu_A[2]) - int(ciu_B[2])
	dis = (restaX*restaX + restaY*restaY)**0.5
	return dis

def tiempo_en_coche(distancia):
	return distancia/15.0
	
def tiempo_en_hyperloop(distancia):
	return distancia/250.0 +200

def locate_ciudad(lista_ciudades, ciudad):
	for c in lista_ciudades:
		if ciudad == c[0]:
			return c

fichero = open('level2-4.txt', 'r')
lectura = fichero.read()
lectura = lectura.split('\n')

if '' in lectura:
	lectura.remove('')
lectura.pop(0)

viaje_hyperloop = lectura.pop()
viaje_total = lectura.pop()
viaje_total = viaje_total.split(' ')
viaje_hyperloop = viaje_hyperloop.split(' ')

lista_ciudades = []
for ciudad in lectura:
	coordenadas = []
	c = ciudad.split(' ')
	coordenadas.append(c[0])
	coordenadas.append(c[1])
	coordenadas.append(c[2])
	lista_ciudades.append(coordenadas)

ciudad_1 = locate_ciudad(lista_ciudades , viaje_total[0])
ciudad_2 = locate_ciudad(lista_ciudades , viaje_total[1])
ciudad_3 = locate_ciudad(lista_ciudades , viaje_hyperloop[0])
ciudad_4 = locate_ciudad(lista_ciudades , viaje_hyperloop[1])

distancia_1 = distancia(ciudad_1, ciudad_3)
distancia_2 = distancia(ciudad_1, ciudad_4)

minimo = min(distancia_1, distancia_2)
maximo = max(distancia_1, distancia_2)

if minimo ==distancia_1:
	ciudad_coche_2=ciudad_4
else:
	ciudad_coche_2=ciudad_3	

del distancia_1
del distancia_2

t1 = tiempo_en_coche(minimo)
t2 = tiempo_en_hyperloop(distancia(ciudad_3, ciudad_4))
t3 = tiempo_en_coche(distancia(ciudad_coche_2, ciudad_2))

print(round(t1+t2+t3))
