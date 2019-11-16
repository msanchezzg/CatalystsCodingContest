
fibonacci = [1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987,
	1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418,
	317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352,
	24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733,
	1134903170, 1836311903, 2971215073]


casos = int(input())

for i in range(casos):
	n = int(input())
	fibs = input()
	fibs = fibs.split()
	fibs = [int(x) for x in fibs]
	linea = input()
	linea = list(linea)
	linea = [char for char in linea if char.isalpha() and char.isupper()]
	dicc = {}
	res = ''

	for i in range(n):
		dicc[fibs[i]] = linea[i]

	i = 0
	while(i < n):
		f = fibonacci[i]
		if(f in dicc.keys()):
			res += dicc[f]

		else:
			res += ' '
			n+=1

		i+=1

	print(res)
