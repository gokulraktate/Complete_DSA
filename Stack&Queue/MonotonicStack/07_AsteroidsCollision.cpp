// class Solution {
//     public:
//         vector<int> asteroidCollision(vector<int>& asteroids) {
//             int n = asteroids.size();
//             vector<int> a;
    
//             for (int i = 0; i < n; i++) {
//                 if (asteroids[i] > 0)
//                     a.push_back(asteroids[i]);
//                 else {
//                     while (!a.empty() && a.back() > 0 &&
//                            a.back() < abs(asteroids[i])) {
//                         a.pop_back();
//                     }
    
//                     if (!a.empty() && a.back() == abs(asteroids[i])) {
//                         a.pop_back();
//                     } else if (a.empty() || a.back() < 0) {
//                         a.push_back(asteroids[i]);
//                     }
//                 }
//             }
//             return a;
//         }
//     };