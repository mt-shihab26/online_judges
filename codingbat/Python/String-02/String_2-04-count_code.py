def count_code(str):
    count_code = 0
    for i in range(len(str)-3):
        if str[i:i+2] == "co" and str[i+3] == "e":
            count_code += 1
    return count_code
