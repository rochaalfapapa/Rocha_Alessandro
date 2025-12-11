def calcula_imc(peso, altura):
    print('Parâmetro peso:', peso)
    print('Paarâmetro altura:', altura)
    imc = peso/altura**2
    return imc

print('Início do programa')
#calcula_imc(altura=1.80, peso=70)
indice = calcula_imc(altura=1.80, peso=70)
print('IMC:', indice)
if indice < 18.5:
    print('Baixo peso')
elif indice < 25:
    print('Peso adequado')
elif indice < 30:
    print('Sobrepeso')
else:
    print('Obeso')
print('Término programa')