def is_palimdorme(string):
    new_string = ""
    for i in range((len(string)-1), -1, -1):
        new_string += string[i]
    return new_string


t = int(input())
for i in range(t):
    word = input()
    reverse_word = is_palimdorme(word)

    if reverse_word == word:
        print("Yes! It is Palindrome!")
    else:
        print("Sorry! It is not Palindrome!")
