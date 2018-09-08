class Solution(object):
    def isRectangleOverlap(self, rec1, rec2):
        """
        :type rec1: List[int]
        :type rec2: List[int]
        :rtype: bool
        """
        return self.overlap(rec1[0], rec1[2], rec2[0], rec2[2]) and self.overlap(rec1[1], rec1[3], rec2[1], rec2[3])

    def overlap(self, x1, x2, y1, y2):
        return y1 < x2 and y2 > x1
        # return y1 < x2 < y2 or y1 < x1 < y2 or x1 < y1 < x2 or x1 < y2 < x2