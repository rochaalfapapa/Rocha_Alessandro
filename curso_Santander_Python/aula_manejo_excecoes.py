"""
try:
    resultado = 10 / 0
    print(resultado)
except ZeroDivisionError:
    print("ERRO: Divisão por zero")
except ValueError:
    print("ERRO: Valor inválido")
"""

try:
    arquivo=open("arquivo.txt", "r")
except FileNotFoundError:
    print("ERRO: Arquivo não encontrado")
finally:
    arquivo.close()