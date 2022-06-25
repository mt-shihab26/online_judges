def test_case():
    n = int(input())
    tmp = map(int, input().split(" "))

    sm = sum(tmp)

    if sm % n == 0:
        print(0)
    else:
        print(1)


t = int(input())

while t:
    test_case()
    t -= 1
