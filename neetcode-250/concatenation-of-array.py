class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = []
        ans.extend(range(n+n))
        for i in range(n):
            ans[i] = nums[i]
            ans[i+n] = nums[i]
        return ans