number = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "0"]

for _ in range(int(input())):
    ch = input()
    if ch >= "a" and ch <= "z":
        print("Lowercase Character")
    elif ch >= "A" and ch <= "Z":
        print("Uppercase Character")
    elif ch in number:
        print("Numerical Digit")
    else:
        print("Special Character")
