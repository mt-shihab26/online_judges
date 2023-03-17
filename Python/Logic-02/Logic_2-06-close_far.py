def close_far(a, b, c):
    a_b = abs(a-b)
    b_c = abs(b-c)
    a_c = abs(a-c)
    condition1 = (a_b <= 1 and b_c >= 2 and a_c >= 2)
    condition2 = (a_b >= 2 and b_c <= 1 and a_c >= 2)
    condition3 = (a_b >= 2 and b_c >= 2 and a_c <= 1)
    if condition1 or condition2 or condition3:
        return True
    return False
