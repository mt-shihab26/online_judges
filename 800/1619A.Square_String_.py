t = int(input())

for _ in range(t):
    st = input()
    ln = len(st)
    if ln % 2:
        print("NO")
    else:
        half = ln // 2
        i, j = 0, half
        is_b = True
        while i < half:
            if st[i] != st[j]:
                print("NO")
                is_b = False
                break
            i += 1
            j += 1
        if is_b:
            print("YES")
