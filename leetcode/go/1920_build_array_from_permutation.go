package main

func buildArray(nums []int) []int {
	ans := make([]int, len(nums))

	for i := range nums {
		ans[i] = nums[nums[i]]
	}

	return ans
}

// github.com/p-nerd (Shihab Mahamud)
// Tuesday, December 06, 2022 | 08:00:12 PM (+6)
