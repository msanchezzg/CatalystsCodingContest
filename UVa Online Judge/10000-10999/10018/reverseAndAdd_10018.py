
casos = int(input())

for i in range(casos):
	cont = 1
	n = input()
	rev = n[::-1]
	intn = int(n)
	intrev = int(rev)
	n = str(intn + intrev)
	rev = n[::-1]
	

	while(n != rev):
		intn = int(n)
		intrev = int(rev)
		n = str(intn + intrev)
		rev = n[::-1]

		cont+=1


	print(str(cont) + ' ' + rev)
	