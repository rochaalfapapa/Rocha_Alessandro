#import imc
from imc import calcula_imc
from imc import classifica_imc

print('Início do programa')
#calcula_imc(altura=1.80, peso=70)
indice = calcula_imc(altura=1.80, peso=70)
print('IMC:', indice)
print(classifica_imc(indice))

print('Término programa')