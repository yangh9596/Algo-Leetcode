class Solution(object):
    def minCostClimbingStairs(self, cost):
        f1 = f2 = 0
        for x in cost:
            f1, f2 = x + min(f1, f2), f1
        return min(f1, f2)