def is_prime(n):
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    reng = int((n ** 0.5)+ 1)
    for i in range(3, reng, 2):
        if n % i == 0:
            return False
    return True

t = int(input())
for i in range(t):
    a, b = input().split()
    a, b = int(a), int(b)
    count = 0
    for j in range(a, b+1):
        if is_prime(j):
            count += 1
    print(count)
