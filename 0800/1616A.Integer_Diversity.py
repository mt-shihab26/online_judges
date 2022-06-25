from collections import defaultdict

t = int(input())

while t:
    n = int(input())
    a, b = {}, {}
    zero = 0
    a = defaultdict(lambda: 0, a)
    b = defaultdict(lambda: 0, b)

    tmp = list(map(int, input().split()))
    for ith in tmp:
        if ith > 0:
            a[ith] += 1
        elif ith < 0:
            b[ith] += 1
        else:
            zero += 1

    ct = 0

    if zero > 0:
        ct += 1
    ct += len(a) + len(b)
    for first, second in a.items():
        if second >= 2 and b[-first] == 0:
            ct += 1

    for first, second in b.items():
        if second >= 2 and a[-first] == 0:
            ct += 1

    print(ct)
    t -= 1
