class Solution {
public:
    bool isPowerOfThree(int n) {
        long ans=1;
        if(n<=0){
            return false;
        }
        while(ans<n){
            ans=ans*3;
        }
        return ans==n;
    }
};