
round = int(input())

while round != -1:
	word=input()
	letters=input()
	mis=[]
	word2=word
	print("Round "+str(round))

	for l in letters:
		if l in word2:
			word=word.replace(l,"")	
		elif l not in mis:
			mis.append(l)

		if len(word)==0:
			print("You win.")
			break
		elif len(mis)>=7:
			print("You lose.")
			break
	
	if len(word)!=0 and len(mis)<7:
		print("You chickened out.")

	round = int(input())

