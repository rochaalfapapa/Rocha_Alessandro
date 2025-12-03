"""
frutas = {"maçã","banana","laranja"}
numeros = set([1,2,3,4,5])
print(frutas)
print(numeros)
"""

"""
conjunto1={1,2,3}
conjunto2={3,4,5}

uniao = conjunto1 | conjunto2
print(uniao)

intersecao = conjunto1 & conjunto2
print(intersecao)

diferenca = conjunto1 - conjunto2
print(diferenca)

diferenca_simetrica = conjunto1 ^ conjunto2
print(diferenca_simetrica)
"""

frutas = {"maçã", "banana", "laranja"}
print(frutas)

frutas.add("pera")
print(frutas)

frutas.remove("banana")
print(frutas)

frutas.discard("uva")
print(frutas)

frutas.clear()
print(frutas)