// class Solution {
// public:
//     int orangesRotting(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();

//         queue<pair<pair<int, int>, int>> q; // {{row, col}, time}
//         int time = 0;

//         // Push all initially rotten oranges into the queue
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 2) {
//                     q.push({{i, j}, 0});
//                 }
//             }
//         }

//         int drow[] = {-1, 0, 1, 0};
//         int dcol[] = {0, 1, 0, -1};

//         while (!q.empty()) {
//             auto front = q.front();
//             q.pop();
//             int r = front.first.first;
//             int c = front.first.second;
//             int t = front.second;
//             time = max(time, t);

//             for (int i = 0; i < 4; i++) {
//                 int nrow = r + drow[i];
//                 int ncol = c + dcol[i];

//                 // If it's a fresh orange, rot it and push to queue
//                 if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1) {
//                     grid[nrow][ncol] = 2; // mark it rotten
//                     q.push({{nrow, ncol}, t + 1});
//                 }
//             }
//         }

//         // Check if any fresh orange is left
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (grid[i][j] == 1) return -1;
//             }
//         }

//         return time;
//     }
// };
