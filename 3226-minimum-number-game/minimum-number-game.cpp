class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(!pq.empty()){
            int alice=pq.top();
            pq.pop();
            int bob=pq.top();
            pq.pop();
            result.push_back(bob);
            result.push_back(alice);
        }
        return result;
    }
};