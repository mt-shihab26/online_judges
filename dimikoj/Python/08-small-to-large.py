for i in range(1, int(input())+1):
    n = list(map(int, input().split()))
    small_to_large = []
    while n:
        small = n[0]
        for j in n:
            if j < small:
                small = j
        small_to_large.append(small)
        n.remove(small)
        small_to_large = list(map(str, small_to_large))
    print("Case",str(i)+":"," ".join(small_to_large))
