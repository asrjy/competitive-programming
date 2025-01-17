class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = {}
        for i, s in enumerate(strs):
            sorted_s = ''.join(sorted(s))
            if sorted_s in groups.keys():
                groups[sorted_s].append(i)
            else:
                groups[sorted_s] = [i]
        return [[strs[i] for i in j] for j in groups.values()]