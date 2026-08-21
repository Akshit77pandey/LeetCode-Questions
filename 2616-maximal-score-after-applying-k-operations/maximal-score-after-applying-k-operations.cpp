class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum=0;
        priority_queue<int>pq(begin(nums),end(nums));

        while(k--){
            int maxel=pq.top();
            pq.pop();

            sum+=maxel;
            maxel=ceil(maxel/3.0);
            pq.push(maxel);
        }
        return sum;
    }
};