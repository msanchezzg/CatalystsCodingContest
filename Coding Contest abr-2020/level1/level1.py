
with open('level1_4.in') as f:
    lines = f.readlines()

latitud = []
longitud = []
timestamp = []
altitud = []
for l in lines[1:]:
    l = l.split(',')
    timestamp.append(int(l[0]))
    latitud.append(round(float(l[1]), 5))
    longitud.append(round(float(l[2]), 5))
    altitud.append(round(float(l[3]), 5))


print(str(min(timestamp)) + ' ' + str(max(timestamp)))
print(str(min(latitud)) + ' ' + str(max(latitud)))
print(str(min(longitud)) + ' ' + str(max(longitud)))
print(str(max(altitud)))
