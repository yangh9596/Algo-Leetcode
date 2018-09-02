class Solution(object):
    def largeGroupPositions(self, S):
        """
        :type S: str
        :rtype: List[List[int]]
        """
        start = end = 0
        ret = []
        for i in range(len(S)):
            if S[i] == S[end]:
                end = i
            else:
                if end - start + 1 >= 3:
                    ret.append([start, end])
                start = end = i
        if end - start + 1 >= 3:
            ret.append([start, end])
        return ret