import math


def LLAToXYZ(latitude, longitude, alt):
    n = EARTH_RADIUS + alt
    x = n * math.cos(latitude*math.pi/180) * math.cos(longitude*math.pi/180)
    y = n * math.cos(latitude*math.pi/180) * math.sin(longitude*math.pi/180)
    z = n * math.sin(latitude*math.pi/180)
    return x, y, z


EARTH_RADIUS = 6371000

with open('level3_5.in') as f:
    lines = f.readlines()


for l in lines[1:]:
    l = l.split(',')
    l = [float(x) for x in l]
    latitud, longitud, altitud = l
    x, y, z = LLAToXYZ(latitud, longitud, altitud)
    print(str(x) + ' ' + str(y) + ' ' + str(z))
