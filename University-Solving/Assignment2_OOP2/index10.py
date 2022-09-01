num = int(input())
while (num > 10):
    digit = num % 10  
    num = num // 10
    print(f'{digit}, ', end='')
digit = num % 10 
print(f'{digit}') 