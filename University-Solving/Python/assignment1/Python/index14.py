meters=int(input())
seconds=int(input())
sp=meters/seconds*3.6
print(sp,'km/h')
if sp < 60:
    print('Too slow. Needs more changes.')
elif sp> 90:
    print('Too fast. Only a few changes should suffice.')
else:
    print('Velocity is okay. The car is ready!')