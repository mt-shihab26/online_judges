def count_substring(string, sub_string):
    ct, i, j = 0, 0, len(sub_string)
    ln = len(string)
    while j <= ln:
        if string[i:j] == sub_string:
            ct += 1
        i += 1
        j += 1
    return ct


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
