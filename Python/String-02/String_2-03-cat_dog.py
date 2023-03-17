def cat_dog(str):
    count_cat = 0
    count_dog = 0
    for i in range(len(str)-2):
        if str[i:i+3] == "cat":
            count_cat += 1
    for i in range(len(str)-2):
        if str[i:i+3] == "dog":
            count_dog += 1
    if count_cat == count_dog:
        return True
    return False
