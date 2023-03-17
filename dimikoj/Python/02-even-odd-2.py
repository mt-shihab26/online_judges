how_many = int(input())
x = []
for i in range(how_many):
    x.append(int(input()))

for i in x:
    if i % 2 == 0:
        print("even")
    else:
        print("odd")