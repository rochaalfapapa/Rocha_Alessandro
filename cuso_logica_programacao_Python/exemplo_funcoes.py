import math
import meu_modulo

d = 0

a = eval(input('Entre com o coeficiente a da equação: '))
b = eval(input('Entre com o coeficiente b da equação: '))
c = eval(input('Entre com o coeficiente c da equação: '))

d = meu_modulo.calcularDelta(a,b,c)

print(f'O valor calculado do delta foi {d}')

if d > 0:
    print('A equação tem 2 raízes reais.')
    raiz1 = (-b + math.sqrt(d))/ 2*a
    raiz2 = (-b - math.sqrt(d))/ 2*a
    print(f'As raízes são  {raiz1} e {raiz2}')
elif d == 0:
    print('A equação tem 1 raíz real.')
    raiz = (-b + math.sqrt(d))/ 2*a
    print(f'A raíz é {raiz}')
else:
    print('A equação não tem raíz real.')