
frutas = ["maça", "banana", "laranja"]
print(frutas)

frutas.append("pera")
print(frutas)

frutas.insert(1, "uva")
print(frutas)

frutas.remove("banana")
print(frutas)

fruta_removida = frutas.pop(2)
print(frutas)
print(fruta_removida)

frutas.sort()
print(frutas)

frutas.reverse()
print(frutas)


numbers = [1, 2, 3, 4, 5]
square = [x ** 2 for x in numbers if x % 2 == 0]
print(square)