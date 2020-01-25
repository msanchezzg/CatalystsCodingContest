from statistics import mean
from math import floor
import os 
import numpy
import sys
from collections import defaultdict
from pandas import DataFrame
for archivo in os.listdir("."):
    if not archivo.endswith(".in") or archivo.startswith("out"):
        continue

    archivo = "level3_example.in"
    with open(archivo) as f:
        lineas = f.read().splitlines()

    
    datos = lineas[1:]
    print(archivo)
    numeros = []
    array = []
    for l in datos:
        nums = l.split()
        filt_lst = []

        for i in range(len(nums)):
            if i%2!=0:
                filt_lst.append(nums[i])
        #print(filt_lst)
        array.append(filt_lst)
    tocho = numpy.array(array) 
    
    copia = numpy.array(tocho, copy=True)
    datos = defaultdict(list)
    fronter = defaultdict(lambda :0)
    print(tocho)
    for (x,y), value in numpy.ndenumerate(tocho):
        #print(x,y,value)
        value = tocho[x][y]
        if x == 0 or y == 0 or x == len(tocho)-1 or y == len(tocho[0])-1:
            fronter[value] += 1
            copia[x][y] = "@"
            datos[value].append((x,y,True))
            
        elif tocho[x+1][y] != value or tocho[x-1][y] != value or tocho[x][y+1] != value or tocho[x][y-1] != value:
            fronter[value] += 1
            copia[x][y] = "@"
            datos[value].append((x,y,True))
        else:
            datos[value].append((x,y,False))

    posiciones = defaultdict(list)
    for k,v in datos.items():
        x = [i[0] for i in v]
        y = [i[1] for i in v]
        print(x)
        print(y)
        min_x,max_x,min_y,max_y = min(x),max(x),min(y),max(y)
        posiciones[k].append((floor(mean([min_x,max_x])),floor(mean([min_y,max_y]))))
    print(posiciones)
    for k,v in posiciones.items():
        for coord in v:

            x,y = coord
            if tocho[x][y]==k:
                for item in datos[k]:
                    if item[0] == int(x) and item[1] == int(y):
                        print(item)
                        
            print((x,y),tocho[x][y],k)
    
    exit()
    
    #print(dict(fronter))
    sol = ""
    elements = [int(i) for i in fronter.keys()]
    for k in sorted(elements):
        #print(k, fronter[k])
        sol += f"{fronter[str(k)]}\n"
    
    
    
    with open(archivo.replace("level","out"),"w+") as f:
        f.write(sol)
    
    '''    
    for (x,y), value in numpy.ndenumerate(copia):
        if (y == 0):
            print("")

        print(f"{value}",end=" ")
        if len(value)==1:
            print("",end=" ")
    '''
    