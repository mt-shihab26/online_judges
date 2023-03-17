def encryped_text(first_text, second_text, third_text):
    encryped_text = ""
    for i in third_text:
        if i in first_text:
            encryped_text += second_text[first_text.index(i)]
        else:
            encryped_text += i
    return encryped_text


first_text = input()
second_text = input()

print(second_text)
print(first_text)
while True:
    try:
        third_text = input()
        print(encryped_text(first_text, second_text, third_text))
    except EOFError:
        break
