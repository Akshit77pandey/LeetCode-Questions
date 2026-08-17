class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();

        vector<int>check(n);
        int count=0;

        for(int i=0;i<n;i++){
            check[i]=heights[i];
        }

        sort(check.begin(),check.end());


        for(int i=0;i<n;i++){
            if(heights[i]!=check[i]){
                count++;
            }
        }
        return count;
    }
};