def last2(str):
    if len(str) <= 2:
        return 0
    last2_sub = str[len(str)-2:]
    count = 0
    for i in range(len(str)-2):
        if str[i] == last2_sub[0] and str[i+1] == last2_sub[1]:
            count += 1
    return count
