def valid(trans,ok):
	trans=trans.split()
	nin=int(trans[1])
	lis_in=[]
	for i in range(3,nin*3+1,3):
		lis_in.append([trans[i], trans[i+1]])
	#ins=trans[1:(nin)*3+1]
	nout=int(trans[nin*3+2])
	lis_out=[]
	for i in range(nin*3+3,nin*3+4+nout,3):
		lis_out.append([trans[i], trans[i+1]])	
	tin=0
	tout=0
	for i in lis_in: 
		tin+=int(i[1])
		if int(i[1])<0: return False
		if i not in ok and i[0]!='origin': return False

	for i in lis_out: 
		tout+=int(i[1])
		if int(i[1])<0: return False
	if (tin!=tout): return False

	nom=[]
	for i in lis_out:
		nom.append(lis_out[0])
	for m in nom:
		if nom.count(m) != 1: return False

	for i in lis_out: ok.append(i)
	for i in lis_in:
		for p,c in enumerate(ok):
			if i[0] == c[0] and i[1] == c[1]:
				ok.pop(p)
	
	return True

	
num_t=int(input())
entradas=[]
for i in range(num_t):
	entrada = input()
	intrada = entrada.split()
	entradas.append([intrada[-1], entrada])
entradas = sorted(entradas)
res=[]
ok=[]
for entrada in entradas:
	if (valid(entrada[1],ok)): res.append(entrada[1])
print(len(res))
for i in res: print(i)
