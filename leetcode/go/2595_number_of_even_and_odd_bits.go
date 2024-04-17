package main

func evenOddBit(n int) []int {
	i, even, odd := 0, 0, 0
	for n != 0 {
		if n%2 == 1 {
			if i%2 == 1 {
				odd++
			} else {
				even++
			}
		}
		i++
		n /= 2
	}
	return []int{even, odd}
}

// github.com/p-nerd (Shihab Mahamud)
// Wednesday, April 17, 2024 | 11:39:21 PM (+6)

