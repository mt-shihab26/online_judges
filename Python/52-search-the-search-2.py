for _ in range(int(input())):
    main_str, sub_str = input().split( )
    sub_len = len(sub_str) 
    count = 0
    for i in range(len(main_str)):
        lest_len = (i + sub_len)
        if main_str[i:lest_len] == sub_str:
            count += 1
    print(count)
