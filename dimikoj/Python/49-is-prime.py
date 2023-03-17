def is_prime(n):
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    reng = int((n ** 0.5)+ 1)
    for i in range(3, reng, 2):
        if n % i == 0:
            return False
    return True



for i in range(int(input())):
    n = int(input())
    
    if is_prime(n):
        print(n, "is a prime")
    else:
        print(n, "is not a prime")
