def pos_neg(a, b, negative):
    if negative is True:
        if a < 0 and b < 0:
            return True
        return False
    elif (a < 0 and b < 0) or (a > 0 and b > 0):
        return False
    return True
