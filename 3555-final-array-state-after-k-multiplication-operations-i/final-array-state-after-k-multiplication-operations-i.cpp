class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=nums.size();
        vector<int>result(n);

        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }

        int i=0;

        while(i<k){
            auto a=pq.top();
           long long small=a.first*multiplier;
            int idx=a.second;
            pq.pop();
            pq.push({small,idx});
            i++;
        }
        while(!pq.empty()){
            result[pq.top().second]=pq.top().first;
            pq.pop();
        }
        return result;
    }
};