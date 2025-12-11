"""
palavra = input('Entre com uma palavra: ')
control = palavra.lower()

while control != 'sair':
    palavra = input('Digite "sair" para encerrar o laço: ')
    control = palavra.lower()
    if control != 'sair':
        print(palavra)
    else:
        break
print('Você digitou "sair" e agora está fora do laço!')
"""

while True:
    palavra = input('Entre com uma palavra: ')
    control = palavra.lower()

    if control == 'sair':
        break
    else:
        print(f'Você digitou "{palavra}"')

print('Você digitou "sair" e agora está fora do laço!')