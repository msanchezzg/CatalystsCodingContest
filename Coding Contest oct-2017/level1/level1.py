num_acc=int(input())
accounts={}
for i in range(num_acc):
	p,b = input().split()
	accounts[p] = int(b)
#print (accounts)

num_t=int(input())
trans=[]
for i in range(num_t):
	pf,pt,c,t = input().split()
	trans.append((int(t),pf,pt,int(c)))
trans = sorted(trans)
for i in trans:
	accounts[i[1]]-=i[3]
	accounts[i[2]]+=i[3]

print (num_acc)
for i in accounts.keys(): print(i,accounts[i])