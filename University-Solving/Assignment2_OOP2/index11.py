a=int(input())
sum=0
for i in range(5):
    a=a//10
    sum+=1
    if a==0:
        break
print(sum)