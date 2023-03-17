t = int(input())
for i in range(t):
    text = input()
    text_sorted_list = sorted(text)
    text_set = set(text_sorted_list)
    text_set_list= sorted(list(text_set))
    for j in text_set_list:
        count = 0
        if j >= "a" and "z":
            for k in text_sorted_list:
                if j == k:
                    count += 1
            print("{} = {}".format(j,count))
    if i != (t - 1):
        print()

