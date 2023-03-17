# dimikoj - Problem 37

list_of_words = []
t = int(input())
for i in range(t):
    list_of_words.append(input())

print("")
list_of_words = sorted(list_of_words)
for j in range(t):
    print(list_of_words[j])
