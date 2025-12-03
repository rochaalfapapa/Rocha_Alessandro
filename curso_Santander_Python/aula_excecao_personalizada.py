#Criação de exceção personalizada

def funcao():
    #Código que pode gerar uma exceção personalizada
    condicao = 1 #exemplo de condição
    if condicao:
        raise Exception("Descrição do erro")

try:
    funcao()
except Exception as e:
    print(f"Erro: {str(e)}")