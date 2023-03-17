def centered_average(nums):
    totall = 0
    mixi = max(nums)
    mini = min(nums)
    nums.remove(mixi)
    nums.remove(mini)
    for num in nums:
        totall += num
    return totall / len(nums)
