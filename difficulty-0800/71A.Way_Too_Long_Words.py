t = int(input())
while t:
    word = input()
    if len(word) > 10:
        between = len(word)-2
        first, last = word[0], word[-1]
        print(f"{first}{between}{last}")
    else:
        print(word)
    t -= 1
