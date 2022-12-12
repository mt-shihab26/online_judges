class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        st1, st2 = "", ""
        for ith in word1:
            st1 += ith
        for ith in word2:
            st2 += ith
        return st1 == st2
