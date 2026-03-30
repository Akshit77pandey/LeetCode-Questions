class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        if(mat.empty())return {};
        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>> transpose(m, vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                transpose[j][i]=mat[i][j];
            }
        }
        return transpose;
    }
};