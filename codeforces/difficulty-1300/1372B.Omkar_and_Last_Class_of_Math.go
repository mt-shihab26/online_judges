package main

import (
	"fmt"
	"math"
	"sort"
)

func main() {
	t := 0
	fmt.Scanf("%d\n", &t)

	for ; t > 0; t-- {
		solve()
	}
}

func solve() {
	n := 0
	fmt.Scanf("%d\n", &n)
	if n%2 == 0 {
		fmt.Println(n/2, n/2)
		return
	}
	d := divisors(n)
	sort.Ints(d)
	a := d[len(d)-2]

	fmt.Println(a, n-a)
}

func divisors(n int) []int {
	d := []int{}
	r := int(math.Sqrt(float64(n)))
	for i := 1; i <= r; i++ {
		if n%i == 0 {
			d = append(d, i)
			if n/i != i {
				d = append(d, n/i)
			}
		}
	}
	return d
}
