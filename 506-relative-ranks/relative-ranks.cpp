class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        priority_queue<pair<int,int>>pq;
        vector<string>ans(n);

        for(int i=0;i<n;i++){
            pq.push({score[i],i});
        }

        int k=0;

        while(!pq.empty()){
            k++;
           auto p=pq.top();
           int val=p.first;
           int idx=p.second;
           pq.pop();
           if(k==1){
            ans[idx]="Gold Medal";
           }
           else if(k==2)ans[idx]="Silver Medal";
           else if(k==3)ans[idx]="Bronze Medal";
           else{
            ans[idx]=to_string(k);
           }
        }
        return ans;
    }
};