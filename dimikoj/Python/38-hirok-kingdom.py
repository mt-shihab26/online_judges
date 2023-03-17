t = int(input())
for _ in range(t):
    n, m = input().split()
    n = int(n)
    for i in range(1, n+1):
        print(((m+" ") * i).strip())
    for j in range(n-1, 0, -1):
        print(((m+" ") * j).strip())
    print()