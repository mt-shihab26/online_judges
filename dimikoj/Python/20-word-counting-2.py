for _ in range(int(input())):
    count = 0
    full_str = input()
    full_list = full_str.split()
    for j in full_list:
        count += 1

    print("Count =", count)