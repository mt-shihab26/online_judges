for _ in range(int(input())):
    n = int(input())
    for i in range(1, n):
        if 2 ** i == n:
            print("It's a power of 2")
            continue
        else:
            print("Not a power of 2")
            continue
