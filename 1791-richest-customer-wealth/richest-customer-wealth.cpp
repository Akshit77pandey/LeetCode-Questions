class Solution {
public:
    int maximumWealth(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int maxm=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<m;j++){
                sum+=mat[i][j];
            }
            maxm=max(maxm,sum);
            }
            return maxm;
    }
};