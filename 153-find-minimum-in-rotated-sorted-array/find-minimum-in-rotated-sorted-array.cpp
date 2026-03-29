class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int min=INT_MAX;
        int st=0,end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]<min){
                min=nums[mid];
            }
            if(nums[mid]<nums[end]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return min;
    }
};