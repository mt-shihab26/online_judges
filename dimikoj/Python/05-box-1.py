t = int(input())

for j in range(t):
    n = int(input())
    i = 0
    while i < n:
        print("*" *n)
        i += 1
    if j != t-1:
        print()


