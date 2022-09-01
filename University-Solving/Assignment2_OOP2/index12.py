num = int(input())
arr = []
while (num != 0):
    digit = num % 10  
    num = num // 10
    arr.append(digit)
for i in range(len(arr)-1, 0, -1):
    print(f'{arr[i]}, ', end='')
print(f'{arr[0]}')