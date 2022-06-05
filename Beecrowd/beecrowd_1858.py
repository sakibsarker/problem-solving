a=int(input())
x=input().split()
bg=int(x[0])
num=0
for i in range(a):
    x[i]=int(x[i])
for i in range(len(x)):
    if x[i]<bg:
        bg=x[i]
        num=i
print(num+1)
