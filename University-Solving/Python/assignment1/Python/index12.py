a=int(input())
if a>=0 and a<=23:
    if a>=0 and a<4:
        print('Patience is a virtue')
    elif a>=4 and a<=6:
        print('Breakfast')
    elif a>=12 and a<=13:
        print('Lunch')
    elif a>=16 and a<=17:
        print('Snacks')
    elif a>=19 and a<=20:
        print('Dinner')
    else:
        print('Patience is a virtue')
else:
    print('Wrong Time')
