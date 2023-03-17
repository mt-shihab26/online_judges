for i in range(int(input())):
    input_str = input()
    char = input()
    count = 0
    for j in range(len(input_str)):
        if input_str[j] == char:
            count += 1
    # print(count)
    if count == 0:
        print("'"+char+"'", "is not present")
    else:
        print("Occurrence of", "'"+char+"'", "in","'"+input_str+"'", "=", count)

