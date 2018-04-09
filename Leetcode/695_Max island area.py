# DFS
class Solution:
    def maxAreaOfIsland(self, grid):
        X = len(grid)
        Y = len(grid[0])
        done = set()
        def area(x, y):
            if(not (0<=x<X and 0<=y<Y and grid[x][y] and (x,y) not in done) ):
                return 0;
            else:
                done.add((x,y))
                return 1+area(x-1, y)+area(x+1,y)+area(x,y+1)+area(x,y-1)
                
        return max(area(r, c)
                   for r in range(X)
                   for c in range(Y))
