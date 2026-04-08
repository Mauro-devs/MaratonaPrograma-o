coast, dollar, quantity = [int(x) for x in input().split()]
total_value = 0

for i in range(1,quantity+1):
    total_value+= coast * i

if total_value < dollar:
        print(0)
else:
      print(total_value - dollar)

