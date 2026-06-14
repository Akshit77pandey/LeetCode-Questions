class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        vector<int>result;
        sort(begin(nums),end(nums));
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};