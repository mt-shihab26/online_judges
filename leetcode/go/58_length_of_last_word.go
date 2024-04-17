package main

func lengthOfLastWord(s string) int {
	x := trimLeft(reverse(s))
	for i, c := range x {
		if c == ' ' {
			return i
		}
	}
	return len(x)
}

func reverse(s string) string {
	r := ""
	for _, c := range s {
		r = string(c) + r
	}
	return r
}

func trimLeft(s string) string {
	p := 0
	for _, c := range s {
		if c == ' ' {
			p++
		} else {
			break
		}
	}
	return s[p:]
}

// github.com/p-nerd (Shihab Mahamud)
// Wednesday, April 17, 2024 | 06:08:37 PM (+6)

