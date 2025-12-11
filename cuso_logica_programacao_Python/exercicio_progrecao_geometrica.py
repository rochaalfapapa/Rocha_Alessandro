termo = soma = contador = 1
while termo >= 0.01:
    termo *= 0.5
    soma += termo
    contador += 1
print(f'A soma dos {contador} termos valem {soma}.')
print(f'O {contador}° termo vale {termo} e ficou abaixo de 0.01.')