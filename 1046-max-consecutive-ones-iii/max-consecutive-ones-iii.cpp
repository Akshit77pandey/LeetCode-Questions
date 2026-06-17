class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=0;
        int i=0;
        int count =0;
        int maxcount=0;
        while(right<n){
            if(nums[right]==1){
                count++;
                right++;
            }
            else if(nums[right]==0 && i<k){
                i++;
                count++;
                right++;
            }
            else if(nums[right]==0 && k<=i){
               if(nums[left] == 0){
                    i--; 
                }
                left++;
                count--;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};