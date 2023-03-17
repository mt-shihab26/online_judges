for i in range(int(input())):
    a, b, c = input().split()
    a, b, c = int(a), int(b), int(c)
    s = (a + b + c) / 2
    area = (s*(s-a)*(s-b)*(s-c)) ** .5
    
    if type(area) == int or type(area) == float:
        print(format(area, ".2f"))
    else:
        print("Oh, No!")
