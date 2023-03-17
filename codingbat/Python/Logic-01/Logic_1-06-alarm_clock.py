def alarm_clock(day, vacation):
    if vacation is True and (day == 0 or day == 6):
        return "off"
    elif (vacation is True and (day <= 5 and day >= 1)) or (day == 0 or day == 6):
        return "10:00"
    elif day <= 5 and day >= 1:
        return "7:00"
