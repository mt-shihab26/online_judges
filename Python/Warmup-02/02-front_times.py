def front_times(str, n):
    if len(str) <= 3:
        front = str
    front = str[0:3]
    return (front * n)
