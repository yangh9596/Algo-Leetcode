class Solution:
    def isToeplitzMatrix(self, matrix):
        """
            :type matrix: List[List[int]]
            :rtype: bool
            """
        r = len(matrix)
        c = len(matrix[0])
        for i in range(r-1):
            for j in range(c-1):
                if matrix[i][j] != matrix[i+1][j+1]:
                    return False
        return True
