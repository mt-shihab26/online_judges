package main

import "fmt"

func twoSum(nums []int, target int) []int {
	for i, v := range nums {
		for j, w := range nums {
			fmt.Println(v, w, v+w, i, j)
			if v+w == target && i != j {
				return []int{i, j}
			}
		}
	}
	return []int{0, 0}
}

// github.com/p-nerd (Shihab Mahamud)
// Tuesday, December 06, 2022 | 08:22:37 PM (+6)
