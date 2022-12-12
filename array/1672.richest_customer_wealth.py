class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        mx = 0
        for ith in accounts:
            i_mx = 0
            for jth in ith:
                i_mx += jth
            mx = max(i_mx, mx)
        return mx
