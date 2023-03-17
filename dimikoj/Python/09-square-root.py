import math

for i in range(int(input())):
    n = int(input())
    temp = math.sqrt(n)
    temp_int = int(temp)
    if temp_int*temp_int == n:
        print("YES")
    else:
        print("NO")
