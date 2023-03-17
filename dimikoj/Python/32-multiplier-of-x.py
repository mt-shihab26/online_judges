t = int(input())
for _ in range(t):
    x, n = input().split()
    x, n = int(x), int(n)

    if x > n:
        print("Invalid!")
    else:
        for i in range(x, n+1, x):
            print(i)
    print("")
