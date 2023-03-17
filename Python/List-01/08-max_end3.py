def max_end3(nums):
    if nums[0] > nums[-1]:
        return nums[0:1]*3
    return nums[-1:]*3
