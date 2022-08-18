a=int(input())
b=int(input())
total=a*120+b*75
print('Previous total:',total)
if total>=300 and total<=499:
    print('New total after discount:',total-10)
elif total>=500 and total<=749:
    print('New total after discount:',total-20)
elif total>=750 and total<=999:
    print('New total after discount:',total-50)
elif total>=1000:
    print('New total after discount:',total-150)
else:
    print('New total after discount:',total)