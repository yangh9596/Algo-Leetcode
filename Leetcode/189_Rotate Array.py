class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        self.reverse(nums, 0, len(nums)-1)
        p = k%len(nums)
        self.reverse(nums, 0, p-1)
        self.reverse(nums, p, len(nums)-1)
        return


    def reverse(self, arr, start, end):
        while start < end:
            temp = arr[start]
            arr[start] = arr[end]
            arr[end] = temp
            start += 1
            end -= 1
        return