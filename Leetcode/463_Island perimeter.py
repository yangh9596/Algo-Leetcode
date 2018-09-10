class Solution(object):
    """
    :type grid: List[List[int]]
    :rtype: int
    """

    def islandPerimeter(self, grid):
        def water_around(y, x):
            return ((x == 0 or grid[y][x - 1] == 0) +
                    (x == len(grid[0]) - 1 or grid[y][x + 1] == 0) +
                    (y == 0 or grid[y - 1][x] == 0) +
                    (y == len(grid) - 1 or grid[y + 1][x] == 0))

        return sum(water_around(y, x) for y in xrange(len(grid)) for x in xrange(len(grid[0])) if grid[y][x])