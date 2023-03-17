def sum13(nums):
    count = 0
    i = 0
    if nums == [] or nums == [13]:
        return 0
    while i < len(nums):
        if nums[i] == 13:
            i += 2
            continue
        count += nums[i]
        i += 1
    return count
