i = 18
store = ''

while i<=63:
  if i%2!=0:
    store+=str(i*-1)+','
  else:
    store+=str(i)+','
  i+=9
print(store[1:len(store)-1])
  