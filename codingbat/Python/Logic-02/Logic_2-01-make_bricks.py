def make_bricks(small, big, goal):
    bricks = goal // 5
    if bricks > big:
        bricks = big
    goal = goal - (bricks*5)
    if goal <= small:
        return True
    return False
