class Solution(object):
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        N1 = self.StrtoInt(num1)
        N2 = self.StrtoInt(num2)
        ret = N1 + N2
        string = ''
        if not ret:
            return '0'
        while ret:
            digit = ret % 10
            string += str(digit)
            ret = ret // 10
        return string[::-1]

    def StrtoInt(self, string):
        num = 0
        for s in string:
            num = num * 10 + int(s)
        return num