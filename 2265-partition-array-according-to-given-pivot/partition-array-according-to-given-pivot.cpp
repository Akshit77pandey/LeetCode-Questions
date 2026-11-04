class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i=0;
        int n=nums.size();

        vector<int>first;
        vector<int>second;
        int count=0;

        while(i<n){
            if(nums[i]<pivot){
                first.push_back(nums[i]);
            }
            if(nums[i]==pivot){
                count++;
            }
            i++;
        }
        int j=0;
        while(j<count){
            first.push_back(pivot);
            j++;
        }
        j=0;
        while(j<n){
            if(nums[j]>pivot){
                first.push_back(nums[j]);
            }
            j++;
        }
        return first;
    }
};