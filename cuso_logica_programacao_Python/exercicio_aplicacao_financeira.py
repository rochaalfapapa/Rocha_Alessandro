fator = 1
contador = 0

taxa = eval(input('Insira a taxa de juros anual (em porcentagem): '))

while fator < 1.5:
    fator += fator * taxa / 100
    contador += 1
print(f'Foram necessários {contador} anos para atingir 150%, com uma taxa de {taxa}% ao ano')