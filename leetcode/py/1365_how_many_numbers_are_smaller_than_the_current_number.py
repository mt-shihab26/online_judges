class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        ans = []
        for ith in nums:
            ct = 0
            for jth in nums:
                if jth < ith:
                    ct += 1
            ans.append(ct)
        return ans
