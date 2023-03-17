for i in range(int(input())):
    r1, r2, b = map(int, input().split())
    #print(r1 ,r2, b)
    
    if b != 0:
        crr = r2 / ((300-b) / 6)
        print(format(crr, ".2f"), end = " ")
        if r1 < r2:
            rrr = 0.0
        else:
            rrr = ((r1 - r2) + 1) / (b / 6)
        print(format(rrr, ".2f"))
    else:
        crr = r2/50
        print(format(crr, ".2f"), end = " ")
        if r1 < r2:
            rrr = 0
        else:
            rrr = (r1 + 1) - r2
        print(format(rrr,".2f"))
