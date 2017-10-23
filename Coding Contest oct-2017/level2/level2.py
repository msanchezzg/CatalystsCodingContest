def valid(acc):
	if(acc[:3] != 'CAT'): return False
	if(not acc[3:5].isdigit()): return False
	if(not acc[5:].isalpha()): return False
	sub = acc[5:]
	dicU={}
	dicL={}
	n=312
	for i in sub:
		if i.isupper():
			if i not in dicU.keys(): dicU[i]=0
			else: dicU[i]+=1 
		else:
			if i not in dicL.keys(): dicL[i]=0
			else: dicL[i]+=1 

		n+=ord(i)

		
	if len(dicL) != len(dicU): return False

	for i in dicU.keys():
		if not i.lower() in dicL.keys(): return False
		if dicU[i] != dicL[i.lower()]: return False
	n%=97
	n=98-n
	if(n!=int(acc[3:5])): return False
	return True




num_acc=int(input())
accounts={}
for i in range(num_acc):
	p,n,b,o = input().split()
	accounts[n] = [p,int(b),int(o)]
#print (accounts)

num_t=int(input())
trans=[]
for i in range(num_t):
	pf,pt,c,t = input().split()
	trans.append((int(t),pf,pt,int(c)))
trans = sorted(trans)

valid_acc = {}
for acc in accounts.keys():
	if(valid(acc)): valid_acc[acc] = accounts[acc]

for i in trans:
	if(i[1] in valid_acc.keys() and i[2] in valid_acc.keys()):
		#print(accounts[i[1]][1] , i[3] , -accounts[i[1]][2])
		if (accounts[i[1]][1] - i[3] >= -accounts[i[1]][2]):
			accounts[i[1]][1]-=i[3]
			accounts[i[2]][1]+=i[3]
			'''
		if (accounts[i[1]][1] + accounts[i[1]][2] <= i[3]):
			accounts[i[1]][1]+=i[3]
			accounts[i[2]][1]-=i[3]
			'''


print (len(valid_acc))
to_print=[]
for i in valid_acc.keys(): print(valid_acc[i][0],valid_acc[i][1])

