sum=0
count=0
for i in range(10):
   x=int(input())
   if x%2!=0:
      sum +=x
      count+=1
print(f'The total of the odd numbers is {sum} and their average is {sum/count}')