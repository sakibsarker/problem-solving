N=1
while N!=0:
    N=int(input())
    if N!=0:
        n=0
        m=0
        for i in range(N):
            A,B=map(int,input().split())
            if A!=0 or B!=0 or A and B!=0 or A==B:
                if A>B:
                    n+=1
                elif B>A:
                    m+=1
        print(n,m)
