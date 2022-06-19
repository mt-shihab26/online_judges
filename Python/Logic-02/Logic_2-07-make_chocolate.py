def make_chocolate(small, big, goal):
    total = 0
    for _ in range(big):
        if total + 5 <= goal:
            total = total + 5
        else:
            break
    remaining = goal - total
    if remaining <= small:
        return remaining
    return -1
