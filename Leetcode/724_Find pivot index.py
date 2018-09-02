class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        Total = sum(nums)
        left = 0
        for i in range(len(nums)):
            if left == Total - left - nums[i]:
                return i
            left = left + nums[i]
        return -1