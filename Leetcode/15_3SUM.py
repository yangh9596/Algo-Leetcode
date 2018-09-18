class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        ret = []
        nums.sort()
        for i in range(len(nums) - 2):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            lo, hi = i+1, len(nums)-1
            while lo < hi:
                if nums[i] + nums[lo] + nums[hi] == 0:
                    ret.append( [ nums[i], nums[lo], nums[hi] ] )
                    while lo < hi and nums[hi] == nums[hi-1]:
                        hi -= 1
                    while lo < hi and nums[lo] == nums[lo+1]:
                        lo += 1
                    hi -= 1
                    lo += 1
                elif nums[i] + nums[lo] + nums[hi] > 0:
                    hi -= 1
                else:
                    lo += 1
        return ret
arr = [-1,0,1,2,-1,-4]
S1 = Solution()

x = S1.threeSum(arr)
print(x)