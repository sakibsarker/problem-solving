a=int(input())
if a%2==0 and a%5==0:
    print('Multiple of 2 and 5 both')
elif a%2==0 or a%5==0:
    print(a)
else:
    print('Not a multiple we want')