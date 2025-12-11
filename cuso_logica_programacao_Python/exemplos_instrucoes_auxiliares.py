while True:
    print('Se a entrada for 5, o programa se encerrará. Se a entrada for 7, apenas essa iteração será passada.')
    num = eval(input('Entre com um número inteiro positivo: '))
    if num == 5:
        break
    elif num == 7:
        continue
    else:
        print('O laço será repetido mais uma vez.')
print('Laço encerrado.')