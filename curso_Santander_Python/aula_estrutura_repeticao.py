"""
frutas = ["maçã", "banana", "laranja"]

for fruta in frutas:
    print(fruta)
    #print("\n")
"""
"""
count = 0

while count < 5:
    print(count)
    count += 1
"""
"""
for num in range(1,6):
    print(num * 2)

count = 1

while count <= 5:
    print(count * 2)
    count += 1

"""
"""
count = 0

while True:
    print(count)
    count += 1

    if count == 5:
        break
"""

for i in range(10):
    if i % 2 == 0:
        continue
    print(i)

for i in range(5):
    pass

frutas = ["maça", "banana", "laranja"]

for i in range(3):
    print(frutas[i])