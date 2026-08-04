class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};
        
        unordered_set<int> numSet(nums.begin(), nums.end());
        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());
        
        vector<int> result;
        for (int i = minVal; i <= maxVal; ++i) {
            if (numSet.find(i) == numSet.end()) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};