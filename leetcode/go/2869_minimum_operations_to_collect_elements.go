package main

import (
	"slices"
)

func minOperations(nums []int, k int) int {
	f := make([]int, k)
	slices.Reverse(nums)
	for i, num := range nums {
		j := i + 1
		if num <= k {
			if f[num-1] == 0 {
				f[num-1] = j
			}
		}
	}
	return slices.Max(f)
}

// github.com/p-nerd (Shihab Mahamud)
// Thursday, April 18, 2024 | 12:44:28 AM (+6)

