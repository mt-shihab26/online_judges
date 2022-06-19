for _ in range(int(input())):
    alphaber_str = input()
    #print(ord("A"), ord("Z"))

    number = ""
    for i in alphaber_str:
        temp = ord(i) - 64
        number += str(temp)
    print(number)
