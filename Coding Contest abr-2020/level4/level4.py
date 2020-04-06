import csv


with open('level4_5.in') as f:
    lines = f.readlines()

planes = []
timestamps = []
lines = lines[1:]

for x in lines:
    x = x.split()
    planes.append(int(x[0]))
    timestamps.append(int(x[1]))

total = zip(planes, timestamps)

for plane, timestamp in total:
    excel = './usedFlights/' + str(plane) + '.csv'

    with open(excel, 'r') as csvFile:
        reader = csv.reader(csvFile, delimiter=',')
        next(reader)
        next(reader)
        t = int(next(reader)[0])
        timestamp -= t
        anterior = 0
        reader = list(reader)
        
        for i in range(1, len(reader)):
            row = reader[i]

            if float(row[0]) > timestamp:
                tmay, latmay, longmay, altmay = row
                row2 = reader[i-1]
                tmin, latmin, longmin, altmin = row2

                diff = float(tmay) - float(tmin)
                diff2 = float(timestamp) - float(tmin)

                latitud = (diff2*(float(latmay)-float(latmin)))/diff
                latitud += float(latmin)

                longitud = (diff2*(float(longmay)-float(longmin)))/diff
                longitud += float(longmin)

                altura = (diff2*(float(altmay)-float(altmin)))/diff
                altura += float(altmin)

                print(str(latitud) + ' ' + str(longitud) + ' ' + str(altura))

                break
