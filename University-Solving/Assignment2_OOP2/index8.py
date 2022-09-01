a=int(input())
N=7
num1=0
for i in range(a):
    num=i*N
    if num<a:
        num1=num+num1
print(num1)