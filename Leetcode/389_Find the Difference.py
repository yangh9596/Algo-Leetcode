def findTheDifference(s, t):
    letter = 0
    for c in s+t:
        letter ^= ord(c)
    return letter


class Solution(object):
    def findTheDifference(self, s, t):
        letter = ord(t[-1])
        for i in range(len(s)):
            letter = letter ^ ord(s[i])
            letter = letter ^ ord(t[i])
        return chr(letter)


s1 = "abcde"
s2 = "bcdefa"

print( findTheDifference(s1, s2) )