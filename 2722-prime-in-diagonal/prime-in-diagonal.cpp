class Solution {
public:

int isprime(int n){
    if(n<=1)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}
    int diagonalPrime(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(matrix.empty())return 0;
        int largest=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                   if(isprime(matrix[i][j])==1){
                    largest=max(largest,matrix[i][j]);
                }}
                else if(j==n-i-1){
                    if(isprime(matrix[i][j])==1){
                    largest=max(largest,matrix[i][j]);
                }
                }
        }}
        return largest;
    }
};