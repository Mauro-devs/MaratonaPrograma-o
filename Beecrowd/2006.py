tea = input()

numeros = input()

contador = 0

for i in range(len(numeros)):
    if numeros[i] == tea:
        contador+=1

print(contador)