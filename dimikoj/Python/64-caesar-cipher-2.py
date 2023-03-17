def decryped_data(text, key):
    char_lower = ""
    for i in range(97, 123):
        char_lower += chr(i)
    char_lower *= 2
    char_upper = char_lower.upper()
    decryped = ""
    for i in text:
        if i in char_lower:
            decryped += char_lower[char_lower.index(i, 26) - key]
        elif i in char_upper:
            decryped += char_upper[char_upper.index(i, 26) - key]
        else:
            decryped += i
    return decryped

text = input()
key = int(input())

print(decryped_data(text,key))
