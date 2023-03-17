t = int(input())
for j in range(t):
    a, b, c = input().split()
    a, b, c = int(a), int(b), int(c)

    for i in range(a, c + 1, a):
        ok = i * b
        if ok > c:
            break
        print(ok)
    if j != (t - 1):
        print("")
