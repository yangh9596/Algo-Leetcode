class Solution(object):
    def transpose(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        ret = [[0] * len(A) for i in range(len(A[0]))]
        for i in range(len(ret)):
            for j in range(len(ret[0])):
                ret[i][j] = A[j][i]
        return ret

# another solution
class Solution(object):
    def transpose(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        return [[A[j][i] for j in range(len(A))] for i in range(len(A[0]))]
