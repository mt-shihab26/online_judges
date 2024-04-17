class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        pre = strs[0]
        strs_len = len(strs)
        for i in range(1, strs_len):
            tmp = ""
            for j in range(0, min(len(strs[i]), len(pre))):
                if strs[i][j] == pre[j]:
                    tmp += pre[j]
                else:
                    break
            pre = tmp
        return pre
