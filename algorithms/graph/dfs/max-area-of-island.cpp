/*
  Max Area of Island
  Problem Link: https://leetcode.com/problems/max-area-of-island/
*/

class Solution {
public:

    int n, m;
    bool visited[100][100];
    vector<pair<int, int>> path = {{0, -1}, {0, 1}, {1, 0},{-1, 0}};

    bool isValid(int i, int j){
        return (i >=0 && i < n && j >= 0 && j < m);
    }

    int count;
    void dfs (int si, int sj, vector<vector<int>>& grid) {
        visited[si][sj] = true;
        count++;
        for(auto && d : path){
            int ci = si + d.first;
            int cj = sj + d.second;
            if (isValid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == 1) {
                dfs(ci, cj, grid);
            }
        }
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        int mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && grid[i][j] == 1) {
                    count = 0;
                    dfs(i, j, grid);
                    mx = max(count, mx);
                }
            }
        }
        
        return mx;
    }
};

