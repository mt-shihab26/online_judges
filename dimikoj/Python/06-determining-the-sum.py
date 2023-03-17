T = int(input())
for i in range(T):
    N = input()
    if len(N) <= 1:
        print("Sum =", N)
    else:
        print("Sum =", int(N[0])+int(N[-1]))