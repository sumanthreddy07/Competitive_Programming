n=int(input())
usernames=[]
answer=[]
for i in range(n):
    stri=input()
    
    if stri in usernames:
        answer.append(stri+str(usernames.count(stri)))
    else:
        answer.append("OK")
    
    usernames.append(stri)

for ele in answer:
    print(ele)