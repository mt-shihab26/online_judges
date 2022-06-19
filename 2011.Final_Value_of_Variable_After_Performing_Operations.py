class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x = 0
        for ith in operations:
            if ith == "++X" or ith == "X++":
                x += 1
            else:
                x -= 1
        return x
