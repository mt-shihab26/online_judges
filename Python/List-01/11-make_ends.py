def make_ends(nums):
    if nums <= 2:
        return nums
    return nums[0:1] + nums[-1:]
