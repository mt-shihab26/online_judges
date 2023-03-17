def caught_speeding(speed, is_birthday):
    if speed <= 60 or is_birthday is True and speed <= 65:
        return 0
    elif speed <= 80 or is_birthday is True and speed <= 85:
        return 1
    elif speed > 80 or is_birthday is True and speed > 85:
        return 2
