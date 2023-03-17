for i in range(int(input())):
    n = int(input())
    factorianl = n
    j = n - 1
    if n == 0:
        factorianl = 1
    else:
        while 0 < j:
            factorianl = factorianl * j
            j -= 1
    print(factorianl)
