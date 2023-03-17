def count_evens(nums):
    count_even = 0
    for num in nums:
        if num % 2 == 0:
            count_even += 1
    return count_even
