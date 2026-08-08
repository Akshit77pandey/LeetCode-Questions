class Solution {
public:
    string reversePrefix(string s, int k) {
        string ans="";
        for(int i=0;i<k;i++){
            ans+=s[i];
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<k;i++){
            s[i]=ans[i];
        }
        return s;
    }
};