class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums = sorted(nums)
        count = -1
        prev_val = nums[0]
        best_val = None
        temp_count = 0

        for n in nums:
            if n == prev_val:
                temp_count += 1
            else:
                temp_count = 1
            if temp_count > count:
                    count = temp_count
                    best_val = n
            prev_val = n
        return best_val