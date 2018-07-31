# moving window
from collections import Counter
    def findAnagrams(self, s, p):
        """
            :type s: str
            :type p: str
            :rtype: List[int]
            """
        res = []
        pCounter = Counter(p)
        sCounter = Counter(s[:len(p)-1])
        for i in range(len(p)-1,len(s)):
            sCounter[s[i]] += 1   # include a new char in the window
            if sCounter == pCounter:    # This step is O(1), since there are at most 26 English letters
                res.append(i-len(p)+1)   # append the starting index
            sCounter[s[i-len(p)+1]] -= 1   # decrease the count of oldest char in the window
            if sCounter[s[i-len(p)+1]] == 0:
                del sCounter[s[i-len(p)+1]]   # remove the count if it is 0
    return res

# my solution good for short strings
'''
    Why this is slow?
    Without using moving windows, everytime I have to form a new dict which is very time-consuming O(s*p)
'''
class Solution:
    def findAnagrams(self, s, p):
        """
            :type s: str
            :type p: str
            :rtype: List[int]
            """
        if( len(s) < len(p) or not len(s) ):
            return []
        benchmark = {c:0 for c in p}
        pos = []
        for c in p:
            benchmark[c] += 1
        for i in range(len(s)-len(p)+1):
            if s[i] not in benchmark:
                continue
            compare = s[i:i+len(p)]
            tmp = benchmark.copy()
            for c in compare:
                if c in tmp:
                    tmp[c] -= 1
                else:
                    break
            if tmp == {c:0 for c in p}:
                pos.append(i)
        return pos
