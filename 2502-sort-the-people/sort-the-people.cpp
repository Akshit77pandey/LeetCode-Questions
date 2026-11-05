class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=names.size();
        priority_queue<pair<int,string>>pq;
        vector<string>result;
        for(int i=0;i<n;i++){
            pq.push({heights[i],names[i]});
        }
        while(!pq.empty()){
            string name=pq.top().second;
            result.push_back(name);
            pq.pop();
        }
        return result;
    }
};