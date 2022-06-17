while True:
    try:
        N=int(input())
        x=[]
        for i in range(N):
            ele=float(input())
            x.append(ele)
            index=x[0]
            for i in range(0,len(x)):
                if x[i]<index:
                    index=x[i]
        print(index)
    except EOFError:
        break
