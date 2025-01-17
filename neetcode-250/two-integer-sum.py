class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        checker = {}
        for index, i in enumerate(nums):
            if i in checker.keys():
                checker[i][1] += 1
                checker[i][2].append(index)
            else:
                checker[i] = [1, 1, [index]]
        for i in nums:
            if i * 2 == target:
                if i in checker.keys() and checker[i][1] >= 2:
                    a = b = i
                    break
            else:
                b = target - i
                if b in checker.keys():
                    a = i
                    b = target - i
                    break
        if a == b:
            return checker[a][2]
        else:
            if a > b:
                return sorted([checker[b][2][0], checker[a][2][0]])
            else:
                return sorted([checker[a][2][0], checker[b][2][0]])