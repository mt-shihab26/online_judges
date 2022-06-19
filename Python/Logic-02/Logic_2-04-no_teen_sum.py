def fix_teen(n):
    if (n >= 13 and n <= 14) or (n >= 17 and n <= 19):
        return 0


def no_teen_sum(a, b, c):
    abc = [a, b, c]
    count = 0
    for i in abc:
        if fix_teen(i) != 0:
            count += i
    return count
