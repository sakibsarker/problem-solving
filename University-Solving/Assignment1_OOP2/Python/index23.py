a=int(input())
deg=(a-32)*0.56
print("{:.2f}".format(deg),'degrees C')
if deg<20:
    print('Winter')
elif deg>=20 and deg<=25:
    print('Autumn')
elif deg>25 and deg<30:
    print('Spring')
elif de>=30:
    print('Summer')