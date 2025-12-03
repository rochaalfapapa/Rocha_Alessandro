#Entrada de dados do usuário

#A função input() sempre retorna uma cadeia de texto
#Caso queira utilizar por exeplo números inteiros ou flutuantes, deve ser utilizado uma conversão explícita: int() ou float()


nome = input("Insira seu nome: ")
idade = int(input("Insira sua idade: "))

print("Olá, " + nome + "!")
print(f"Olá, meu nome é {nome} e tenho {idade} anos.")
print(f"Sua idade é: {idade} anos.")

if idade >= 18:
    print(f"Você tem {idade} anos, e é maior de idade!")
else:
    print(f"Você tem {idade} anos, e é menor de idade!")