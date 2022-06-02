arr=[]
for j in range(0,100):
    ele=int(input())
    arr.append(ele)
index=0
led_n=0
for i in range(0,len(arr)):
    if arr[i]>led_n:
        led_n=arr[i]
        index=i+1
print(led_n)
print(index)
