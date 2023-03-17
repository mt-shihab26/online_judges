def squirrel_play(temp, is_summer):
    if temp >= 60 and temp <= 90 or (is_summer is True and (temp <= 100 and temp >= 60)):
        return True
    return False
