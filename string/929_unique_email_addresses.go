package leetcode

import "strings"

type set struct{}

var exists set

func numUniqueEmails(emails []string) int {
	ln := len(emails)
	s := make(map[string]set)
	for i := 0; i < ln; i++ {
		sp := strings.Split(emails[i], "@")
		ln2 := len(sp[0])
		local := ""
		for j := 0; j < ln2; j++ {
			if sp[0][j] == '+' {
				break
			}
			if sp[0][j] != '.' {
				local += string(sp[0][j])
			}
		}
		s[local+"@"+sp[1]] = exists
	}
	return len(s)
}
