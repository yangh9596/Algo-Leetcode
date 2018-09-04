class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        i = 1
        while i <= len(digits):
            if digits[-i] == 9:
                digits[-i] = 0
                i += 1
            else:
                digits[-i] += 1
                break
            if i > len(digits):
                digits = [1] + digits
                break
        return digits





