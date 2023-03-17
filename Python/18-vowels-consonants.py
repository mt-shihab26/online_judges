for _ in range(int(input())):
    full_sentence = input()
    #full_sentence = full_sentence.lower()
    all_vowels = "aeiouAEIOU"
    all_con = "bcdfghjklmnpqrstvwxyzBCDFGHIJKLMNPQRSTVWXYZ"
    vowels = ""
    consonants = ""
    for i in full_sentence:
        if i in all_vowels:
            vowels += i
        elif i in all_con:
            consonants += i
    print(vowels, consonants, sep="\n")
