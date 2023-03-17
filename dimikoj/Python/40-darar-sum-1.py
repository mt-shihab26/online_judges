def darar_sum(x, k):
    sumition = 0
    for i in range(k+1):
        sumition += (x ** i)
    return sumition


t = int(input())
for _ in range(t):
    x, k = input().split()
    x, k = int(x), int(k)
    print("Result =", darar_sum(x, k))
