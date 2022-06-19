n = int(input())
if n <= 2:
    print(1)
else:
    f_of_n = 1
    f_of_n_1 = 1
    for i in range(3, n+1):
        temp = f_of_n_1
        f_of_n_1 = f_of_n_1 + f_of_n
        f_of_n = temp
    print(f_of_n_1)
