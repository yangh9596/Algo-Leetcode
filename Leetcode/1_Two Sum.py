class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        if len(nums) <= 1:
            return None
        table = {}
        for i in range(len(nums)):
            if target - nums[i] in table:
                return [table[target - nums[i]], i]
            table[nums[i]] = i
