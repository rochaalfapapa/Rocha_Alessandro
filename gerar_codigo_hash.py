import hashlib

def gerar_hash_frase(frase):
    # 1. Codificar a string para bytes (requisito de todas as funções hash)
    bytes_frase = frase.encode('utf-8')
    
    # 2. Criar o objeto hash SHA-256
    hash_object = hashlib.sha256(bytes_frase)
    
    # 3. Obter o hash em formato hexadecimal (a representação em string)
    hash_hex = hash_object.hexdigest()
    
    return hash_hex

# Exemplo:
minha_frase = "By A. Rock"
hash_resultante = gerar_hash_frase(minha_frase)

print(f"Frase original: {minha_frase}")
print(f"Hash SHA-256: {hash_resultante}")