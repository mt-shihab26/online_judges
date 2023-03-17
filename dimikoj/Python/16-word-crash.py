for _ in range(int(input())):
    full_sentence = list(map(str, input().split()))
    reversed_sentence = []

    for i in range(len(full_sentence)):
        temp_str = ""
        j = len(full_sentence[i]) - 1
        while j >= 0:
            temp_str += full_sentence[i][j]
            j -= 1
        reversed_sentence.append(temp_str)
    print(" ".join(reversed_sentence))
