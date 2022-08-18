a=int(input())
if a>=0 and a<=168:
    if a>40:
        print(8000+(100-40)*300)
    elif a<40:
        print(a*200)
elif a>168:
    print('Impossible to work more then 168 hours weekly')
else:
    print('Hour cannot be negative')