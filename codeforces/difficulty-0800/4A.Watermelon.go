package main

import "fmt"

func main() {
	var num int
	fmt.Scanf("%d", &num)

	if num <= 2 {
		fmt.Println("NO")
	} else {
		if num%2 == 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
