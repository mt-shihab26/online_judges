def hash_key(string):
    multiplication = 1
    for i in string:
        multiplication *= ord(i)
    return (multiplication % 97)


for i in range(int(input())):
    str1, str2 = input().split()

    str1_key = hash_key(str1)
    str2_key = hash_key(str2)

    if str1_key == str2_key:
        print("YES")
    else:
        print("NO")
