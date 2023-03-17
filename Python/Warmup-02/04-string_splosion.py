def string_splosion(str):
    length = len(str)
    new_str = ""
    for i in range(length):
        for j in range(i+1):
            new_str += str[j]
    return new_str
