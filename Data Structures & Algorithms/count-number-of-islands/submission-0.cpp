class Solution {
public:
    bool bfs(vector<vector<char>>& grid, int x,int y,vector<vector<bool>>& isvisited) {
        if (x<0 || x>=grid.size() || y<0 || y>=grid[0].size()) return false;
        if (grid[x][y] == '0') return false;
        if (isvisited[x][y]) return false;

        isvisited[x][y] = true;
        bfs(grid, x+1, y, isvisited);
        bfs(grid, x-1, y, isvisited);
        bfs(grid, x, y+1, isvisited);
        bfs(grid, x, y-1, isvisited);

        return true;
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> isvisited(grid.size(), vector<bool>(grid[0].size(), false));
        int ans = 0;
        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[0].size(); j++) {
                if (bfs(grid, i, j, isvisited)) ans++;
            }
        }
        return ans;
    }
};
