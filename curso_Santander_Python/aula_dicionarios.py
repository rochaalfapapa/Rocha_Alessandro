pessoa = {"nome":"João", "idade": 25, "cidade":"Madri"}

print(pessoa["nome"])
print(pessoa["idade"])
print(pessoa["cidade"])

print(pessoa.keys())
print(pessoa.values())
print(pessoa.items())

pessoa.update({"profissão":"Engenheiro"})
print(pessoa)