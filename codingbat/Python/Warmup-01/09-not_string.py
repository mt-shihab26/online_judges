def not_string(str):
    if len(str) >= 3:
        if str[0:3] == "not":
            return str
    return ("not" + " " + str)
