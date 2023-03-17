def insertion_sort(lst):
    for i in range(len(lst)):
        for j in range(i - 1, -1, -1):
            if lst[j][1] == lst[j + 1][1] and lst[j][0] > lst[j + 1][0]:
                lst[j], lst[j + 1] = lst[j + 1], lst[j]
            elif lst[j][1] > lst[j + 1][1]:
                lst[j], lst[j + 1] = lst[j + 1], lst[j]
            else:
                break


if __name__ == '__main__':
    lst = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        lst.append((name, score))

    insertion_sort(lst)

    for i in range(1, len(lst)):
        if lst[i - 1][1] != lst[i][1]:
            break

    print(lst[i][0])

    for j in range(i + 1, len(lst)):
        if lst[j - 1][1] == lst[j][1]:
            print(lst[j][0])
        else:
            break
