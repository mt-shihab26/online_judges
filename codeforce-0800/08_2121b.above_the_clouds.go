package main

import "fmt"

func main() {
	t := 0
	fmt.Scanf("%d\n", &t)

	for t != 0 {
		tc()
		t--
	}
}

func tc() {
	n := 0
	fmt.Scanf("%d\n", &n)
	s := ""
	fmt.Scanf("%s\n", &s)

	m := map[rune]int{}

	for _, c := range s {
		m[c]++
	}

	for i := 1; i < n-1; i++ {
		c := s[i]
		if m[rune(c)] > 1 {
			fmt.Println("YES")
			return
		}
	}
	fmt.Println("NO")
}
