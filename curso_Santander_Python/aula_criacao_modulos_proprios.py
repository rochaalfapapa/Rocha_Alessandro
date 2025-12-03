"""
import meu_modulo

meu_modulo.saudar("Alessandro")

resultado = meu_modulo.calcular_soma(5,3)

print(resultado)
"""

from meu_pacote import operacoes, utilidades

resultado = operacoes.somar(5,3)
utilidades.imprimir_mensagem(f"O resultado da soma é: {resultado}")

nome = utilidades.obter_nome_usuario()
utilidades.imprimir_mensagem(f"Olá, {nome}!")