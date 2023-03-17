def swap_case(s):
    new_s = ""
    for i in s:
        if 'a' <= i <= 'z':
            new_s += (chr(ord(i) - 32))
        elif 'A' <= i <= 'Z':
            new_s += (chr(ord(i) + 32))
        else:
            new_s += i
    return new_s

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
