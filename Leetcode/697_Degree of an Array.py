class Solution(object):
    def findShortestSubArray(self, nums):
    
        # use dict to take down start and end
        if not nums:
            return 0
        start, end, count = {}, {}, {}
        for i in range(len(nums)):
            if nums[i] not in start:
                start[nums[i]] = i
            end[nums[i]] = i
            count[nums[i]] = count.get(nums[i], 0) + 1

        degree = max(count.values())
        length = len(nums)
        for k, v in count.items():
            if v == degree:
                length = min(end[k] - start[k] + 1, length)
        return length