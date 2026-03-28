class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int prefix=1;
        int sufix=1;
        int ans=nums[0];
        for(int i=0;i<n;i++){
            prefix*=nums[i];
            sufix*=nums[n-i-1];
            ans=max(ans,max(prefix,sufix));

            if(prefix==0)prefix=1;
            if(sufix==0)sufix=1;
        }
        return (int)ans;
    }
};