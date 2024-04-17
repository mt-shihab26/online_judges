package main 

type ListNode struct {
	Val  int
	Next *ListNode
}

func deleteDuplicates(head *ListNode) *ListNode {
	p := head
	for p != nil {
		d := p.Next
		for d != nil && p.Val == d.Val {
			d = d.Next
		}
		p.Next = d
		p = d
	}
	return head
}

// github.com/p-nerd (Shihab Mahamud)
// Wednesday, April 17, 2024 | 05:32:06 PM (+6)
