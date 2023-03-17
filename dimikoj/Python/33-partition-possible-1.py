# I don't solved

t = int(input())
for j in range(t):
    a, b, c = input().split()
    a, b, c = int(a), int(b), int(c)

    for j in range(0, b+1, c):
        if j < a:
            continue
        print(j)
    print('')


"""
    for i in range(a, b+1):
        if i % c == 0:
            print(i)
    print('')
"""
