class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n=len(nums)
        b=nums
        hash=set(b)
        for i in range(1,n+2):
            if i not in hash:
                return i
        