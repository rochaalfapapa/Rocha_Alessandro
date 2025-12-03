"""
def saudacao():
    print("Olá, mundo!")
"""

"""
def saudacao(nome):
    print(f"Olá, {nome}!")

saudacao("João")
saudacao("Maria")
"""

"""
def soma(a, b):
    return a + b

resultado = soma(3,4)
print(resultado)
"""

"""
quadrado = lambda x: x**2
print(quadrado(5))
"""

"""
def funcao():
    variavel_local = 10
    print(variavel_local)

variavel_global = 20

def funcao2():
    print(variavel_global)

funcao()
funcao2()
print(variavel_global)
print(variavel_local)
"""
"""
def calcular_media(*numeros):
    soma = sum(numeros)
    quantidade = len(numeros)
    media = soma / quantidade
    return media

print("média:", calcular_media(10,20,30,40))

def somar_3(x):
    return x + 3

somar = lambda x: x + 3

print("Somar 3 a um número:", somar(5))
print(somar_3(7))
"""

def area_retangulo(base,altura):
    """
    Docstring for area_retangulo
    Calcula a áre de um retângulo
    
    Argumentos:
        base(float): A base do retângulo
        altura(float): A altura do retângulo

    retorna:
        float: A área do retângulo
    """
    return base*altura

print(area_retangulo(10,5))

def soma_variavel(*numeros):
    total=0
    for numero in numeros:
        total+=numero
    return total

print(soma_variavel(1,2,3))
print(soma_variavel(4,5,6,7))