for _ in range(int(input())):
    full_sentence = input()
    full_sentence = full_sentence.lower()
    count = 0
    for i in full_sentence:
        if i == "a" or i == "e" or i == "i" or i == "o" or i == "u":
            count += 1
    print("Number of vowels =", count)
