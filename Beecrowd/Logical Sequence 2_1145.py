x,y=map(int,input().split())
z=1
sum=int(y/x)
for i in range(1,sum+1):
    sp=''
    for j in range(1,x+1):
        sp+=str(z)+' '
        z+=1
    print(sp[:-1])
