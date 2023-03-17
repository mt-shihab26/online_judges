t = int(input())
for _ in range(t):
    n = int(input())
    n = str(n)
    new_n = ""
    
    for i in range(len(n)-1, -1, -1):
        new_n += n[i]
    print(int(new_n))
    
