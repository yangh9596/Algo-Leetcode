class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        word = {}
        if not len(s) == len(t):
            return False
        for i in range(len(s)):
            if s[i] in word.keys():
                if not word[s[i]] == t[i]:
                    return False
            else:
                if t[i] in word.values():
                    return False
                else:
                    word[s[i]] = t[i]
        return True
