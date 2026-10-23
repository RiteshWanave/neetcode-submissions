class Solution {
public:
    unordered_map<string, bool> isvisited;
    int bfs(vector<vector<int>>& grid, int x, int y, int isize) {
        if (x<0 || y<0 || x>=grid.size() || y>=grid[0].size()) return 0;
        if(grid[x][y] == 0) return 0;
        string curr=to_string(x) + '+' + to_string(y);
        if (isvisited[curr]) {
            return 0;
        }
        isvisited[curr] = true;
        isize = 1;
        isize += bfs(grid, x+1, y, 0);
        isize += bfs(grid, x-1, y, 0);
        isize += bfs(grid, x, y+1, 0);
        isize += bfs(grid, x, y-1, 0);

        return isize;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int isize = 0;
        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[0].size(); j++) {
                int currsize = bfs(grid, i, j, 0);
                isize = max(isize, currsize);
            }
        }
        return isize;
        
    }
};
