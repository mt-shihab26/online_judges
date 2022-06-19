def factorial(i):
    i_of_facto = 1
    for j in range(2, i+1):
        i_of_facto *= j
    return i_of_facto


def sum_of_dara(n):
    sum_of = 0
    for i in range(n+1):
        sum_of += (i / factorial(i))
    return sum_of


t = int(input())
for _ in range(t):
    n = int(input())

    #print("{:.4f}".format(sum_of_dara(n)))
    print(format(sum_of_dara(n), ".4f"))
