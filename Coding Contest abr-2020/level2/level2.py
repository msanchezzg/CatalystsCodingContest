from collections import Counter


with open('level2_4.in') as f:
    lines = f.readlines()


vuelos = []
vuelos2 = []
for l in lines[1:]:
    l = l.split(',')
    a = (l[4], l[5], int(l[6]))
    vuelos2.append(a)

vuelos2 = set(vuelos2)
for x in vuelos2:
    vuelos.append((x[0], x[1]))

counter = list(Counter(vuelos).items())
counter = sorted(counter, key=lambda x: (x[0][0], x[0][1]))

for x in counter:
    print(x[0][0] + ' ' + x[0][1] + ' ' + str(x[1]))
    
