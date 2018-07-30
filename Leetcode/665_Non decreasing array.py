class Solution:
    def checkPossibility(self, nums):
        if( len(nums) ):
            return True
        
        p = 0
        idx = None
        for i in range( len(nums) - 1 ):
            if(nums[i] > nums[i+1]):
                p = p + 1
                idx = i
            if( p == 2):
                return False
        
        if( p == 0 ):
            return True
        
        # p == 1
        return( idx==0 or idx==len(nums)-2 or nums[idx-1] <= nums[idx+1] or nums[idx+2] >= nums[idx] )
