class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) == 1:
            return strs[0]
        minlen = 201
        mins = None
        for s in strs:
            if len(s) < minlen:
                minlen = len(s)
                mins = s
        print(minlen)
        if minlen == 0:
            return ""
        if minlen == 1:
            for s in strs:
                if s[0] != mins:
                    return ""
            return mins
        flag = 0
        for i in range(minlen, 0, -1):
            for s in strs:
                if s[:i] != mins[:i]:
                    flag = -1
                    break
                else:
                    flag = 1
            if flag != -1:
                return mins[:i]
        return ""