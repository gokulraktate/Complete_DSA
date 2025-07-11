// class Solution {
// private:
//     void dfs(int row, int col, vector<vector<int>>& ans,
//              vector<vector<int>>& image, int color, int initial,
//              int delrow[], int delcol[]) {
//         ans[row][col] = color;
//         int n = image.size();
//         int m = image[0].size();

//         for (int i = 0; i < 4; i++) {
//             int nrow = row + delrow[i];
//             int ncol = col + delcol[i];

//             if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
//                 image[nrow][ncol] == initial && ans[nrow][ncol] != color) {
//                 dfs(nrow, ncol, ans, image, color, initial, delrow, delcol);
//             }
//         }
//     }

// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
//                                   int color) {
//         int initial = image[sr][sc];
//         if (initial == color) return image;  // Optimization to avoid unnecessary DFS

//         vector<vector<int>> ans = image;
//         int delrow[] = {-1, 0, +1, 0};
//         int delcol[] = {0, +1, 0, -1};

//         dfs(sr, sc, ans, image, color, initial, delrow, delcol);
//         return ans;
//     }
// };
