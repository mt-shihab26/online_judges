t = int(input())
for i in range(t):
    a, b = input().split()
    a, b = int(a), int(b)

    mul = a * b

    if b > a:
        a, b = b, a
    while a != b:
        if b == 0:
            break
        if a > b:
            a = a - b
        else:
            b = b - a
    gcd = a

    lcm = mul / gcd
    lcm = int(lcm)
    print("LCM =", lcm)