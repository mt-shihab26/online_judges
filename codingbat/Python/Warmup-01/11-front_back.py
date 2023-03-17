def front_back(str):
    length = len(str)
    if length <= 1:
        return str
    new_str = ""
    new_str += str[length - 1]
    for i in range(1, length-1, 1):
        new_str += str[i]
    new_str += str[0]
    return new_str
