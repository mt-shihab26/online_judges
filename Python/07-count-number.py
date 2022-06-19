for _ in range(int(input())):
    n = input()
    count_n = 0
    for i in range(len(n)):
        if n[i] == " ":
            count_n += 1  
    print(count_n+1)
