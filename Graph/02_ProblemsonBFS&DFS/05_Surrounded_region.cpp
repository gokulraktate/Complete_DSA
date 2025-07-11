/*


class Solution {
private:
    void dfs(int r, int c, vector<vector<int>>& vis, vector<vector<char>>& board) {
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        int n = board.size();
        int m = board[0].size();

        vis[r][c] = 1;

        for(int i = 0; i < 4; i++) {
            int nrow = r + delrow[i];
            int ncol = c + delcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
               !vis[nrow][ncol] && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, board);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if(n == 0) return;
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        // Traverse first and last row
        for(int j = 0; j < m; j++) {
            if(!vis[0][j] && board[0][j] == 'O') {
                dfs(0, j, vis, board);
            }
            if(!vis[n-1][j] && board[n-1][j] == 'O') {
                dfs(n-1, j, vis, board);
            }
        }

        // Traverse first and last column
        for(int i = 0; i < n; i++) {
            if(!vis[i][0] && board[i][0] == 'O') {
                dfs(i, 0, vis, board);
            }
            if(!vis[i][m-1] && board[i][m-1] == 'O') {
                dfs(i, m-1, vis, board);
            }
        }

        // Flip unvisited 'O' to 'X'
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};



*/