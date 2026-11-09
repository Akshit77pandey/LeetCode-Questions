class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        int k=0;
        int j=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                result[k]=nums[i];
                k=k+2;
            }
            else{
                result[j]=nums[i];
                j=j+2;
            }
        }
        return result;
    }
};