/*

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_map<int,int>mpp;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mpp[grid[i][j]]++;
            }
        }
        int miss=-1;
        int repeat =-1;
        for(int i=1;i<=n*n;i++){
            if(mpp[i]==0) miss=i;
            if(mpp[i]>1) repeat=i;
        }
        return {repeat,miss};
    }
};

*/