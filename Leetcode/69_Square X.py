class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        r = x
        while r ** 2 > x:
            r = r / 2 + x / (2 * r)
        return r
