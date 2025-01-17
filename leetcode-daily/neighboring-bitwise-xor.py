class Solution:
    def doesValidArrayExist(self, derived: List[int]) -> bool:
        last = 0
        latest = 0
        for i in range(-1, -(len(derived)+1), -1):
            prev_result = derived[i] ^ latest
            latest = prev_result
        if latest != last:
            return False
        return True