for _ in range(int(input())):
    string = input()
    new_str= ""
    new_str += string[0] 
    for i in range(1, len(string)):
        if string[i] == "L":
            on = string[i-1]
        elif string[i] == "R":
            on = string[i+1]
        else:
            on = string[i]
        new_str += on
    print(new_str)
