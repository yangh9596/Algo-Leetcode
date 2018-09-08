class Solution(object):
    def judgeSquareSum(self, c):
        """
        :type c: int
        :rtype: bool
        """
        small = 0
        big = int(c ** 0.5) + 1
        while small <= big:
            if small ** 2 + big ** 2 == c:
                return True
            elif small ** 2 + big ** 2 > c:
                big -= 1
            else:
                small += 1
        return False

