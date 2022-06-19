for i in range(int(input())):
    number = int(input())
    print("Case "+str(i+1)+":", end="")
    devi = number
    for j in range(1, number+1, 1):
        divided = number / j
        divided_int = int(divided)
        if divided - divided_int == 0:
            print("",j, end="")
    print()
