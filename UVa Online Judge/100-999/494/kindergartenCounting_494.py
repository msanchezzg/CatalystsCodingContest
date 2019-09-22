import sys


a = sys.stdin.readlines()

for line in a:
	total = 0
	s = line.split()

	for palabra in s:
		letra = False
		palabra2 = "".join([char if char.isalpha() else ' ' for char in palabra])

		p = palabra2.split()
		p = [x for x in p if x]

		total += len(p)

	print(total)