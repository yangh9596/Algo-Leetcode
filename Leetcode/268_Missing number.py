class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        upper = len(nums)
        return (upper+1)*upper/2- sum(nums)


# smarter solution bit manipulation XOR

class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        xor = 0
        for i in range(len(nums)):
            xor = xor ^ nums[i] ^ (i+1)
        return xor