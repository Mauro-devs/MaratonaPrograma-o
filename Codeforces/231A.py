linhas = int(input())

contador = 0
for i in range(linhas):
    pet, vas, tony = [int(x) for x in input().split()]


    if pet + vas + tony >= 2:
        contador+=1

print(contador)