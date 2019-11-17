

while(1):
	n = input()

	if(n == '0'):
		break

	l = len(n)
	total = 0
	nmax = 2**31 - 1

	for i in range(l):
		a = int(n[i]) * (2**l - 1)
		l-=1
		total+=a

		if(total > nmax):
			total = nmax
			break


	print(str(total))

