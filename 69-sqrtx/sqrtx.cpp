class Solution {
public:
    int mySqrt(int x) {
        long low=1;
        long high=x;
        int ans=0;
        if(x==0||x==1)return x;

        while(low<=high){
            long long mid=low+(high-low)/2;
            long long temp=mid*mid;

            if(temp==x){
                return mid;
            }
            else if(temp<x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};