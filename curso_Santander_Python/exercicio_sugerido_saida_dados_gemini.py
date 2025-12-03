def calcular_e_imprimir_resultados(numero1, numero2):
    soma = numero1 + numero2
    produto = numero1 * numero2
    print(f"Para os números {numero1} e {numero2}, a soma é {soma} e o produto é {produto}.")

def obter_resultados_formatados(numero1, numero2, soma, produto):
    return f"Para os números {numero1} e {numero2}, a soma é {soma} e o produto é {produto}."

def calcular_soma_e_produto(numero1, numero2):
    soma = numero1 + numero2
    produto = numero1 * numero2
    return soma, produto

numero1 = int(input("Insira o primeiro número: "))
numero2 = int(input("Agora insira o segundo número: "))

soma_calculada, produto_calculado = calcular_soma_e_produto(numero1, numero2)

mensagem = obter_resultados_formatados(numero1, numero2, soma_calculada, produto_calculado)

print(mensagem)