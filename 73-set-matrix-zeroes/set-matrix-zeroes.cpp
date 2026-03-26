class Solution {
public:

void row(vector<vector<int>>& matrix,int r,int m){
    for(int i=0;i<m;i++){
        if(matrix[r][i]!=0){
            matrix[r][i]='.';
        }
    }
}

void col(vector<vector<int>>& matrix,int col,int n){
    for(int i=0;i<n;i++){
        if(matrix[i][col]!=0){
            matrix[i][col]='.';
        }
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row(matrix,i,m);
                    col(matrix,j,n);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='.'){
                    matrix[i][j]=0;
                }
            }
        }
    }
};