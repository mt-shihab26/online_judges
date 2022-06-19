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

    factorianl = str(factorianl)
    k = len(factorianl)
    count = 0
    while k > 0:
        if factorianl[k-1] == "0":
            count += 1
        else:
            break
        k -= 1
    print(count)
