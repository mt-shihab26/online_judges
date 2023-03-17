for _ in range(int(input())):
    input_str = input()
    new_str = ""
    for i in range(len(input_str)-1, -1, -1):
        new_str += input_str[i]

    print(new_str)
