start_value = -10
end_value = 20

for i in range(start_value, end_value+1, 5):
  if i == end_value:
    print(i, end="")
  else:
    print(i, end=", ")