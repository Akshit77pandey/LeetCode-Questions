class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.size();
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        string ans=s;
        for(int l=1;l<=n-1;l++){
            string temp=s.substr(l)+s.substr(0,l);
            ans=min(ans,temp);
        }
        return ans;
    }
};