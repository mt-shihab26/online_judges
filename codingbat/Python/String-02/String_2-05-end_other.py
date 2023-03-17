def end_other(a, b):
    a = a.lower()
    b = b.lower()
    if a[-(len(b)):] == b or a == b[-(len(a)):]:
        return True
    return False
