class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        flags = {}
        for i in range(len(nums)):
            if (nums[i] in flags) and (flags[nums[i]] == 1):
                return True 
            else:
                flags[nums[i]] = 1
        return False