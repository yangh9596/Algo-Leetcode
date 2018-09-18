class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if not s:
            return 0
        length = 0
        p1 = 0
        char = {}
        for i in range(len(s)):
            if s[i] in char and p1 <= char[s[i]]:
                p1 = char[s[i]] + 1
            else:
                length = max(length, i-p1+1)
            char[s[i]] = i
        return length