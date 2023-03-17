for _ in range(int(input())):
    n = input()
    main_n = int(n)
    calculated_n = 0
    n_of_len = len(n)
    for i in range(n_of_len):
        ok = int(n[i])
        calculated_n = calculated_n + (ok ** 3)
    
    if calculated_n == main_n:
        print(main_n, "is an armstrong number!")
    else:
        print(main_n, "is not an armstrong number!")