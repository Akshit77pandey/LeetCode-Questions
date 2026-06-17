class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<k;i++){
            leftsum+=nums[i];
        }
        int maxsum=leftsum;
        int rightidx=n-1;
        for(int i=k-1;i>=0;i--){
            leftsum-=nums[i];
            rightsum+=nums[rightidx];
            rightidx--;
            maxsum=max(maxsum,leftsum+rightsum);
        }
        return maxsum;
    }
};