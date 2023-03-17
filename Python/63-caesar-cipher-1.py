def caesar_cipher_gen(text, key):
    all_lower = ""
    for j in range(97, 123):
        all_lower += chr(j)
    all_lower = all_lower * 2
    all_upper = all_lower.upper()

    encrypeted = ""
    for i in text:
        if i in all_lower:
            encrypeted += all_lower[(all_lower.index(i) + key)]
        elif i in all_upper:
            encrypeted += all_upper[(all_upper.index(i) + key)]
        else:
            encrypeted += i
    return encrypeted

text = input()
key = int(input())
print(caesar_cipher_gen(text, key))
