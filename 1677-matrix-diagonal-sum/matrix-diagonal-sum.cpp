class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        if(n==0)return 0;
        int pd=0;
        int sd=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==i){
                    pd+=mat[i][j];
                }
                else if(j==n-1-i){
                    sd+=mat[i][j];
                }
            }
        }
        return pd+sd;
    }
};