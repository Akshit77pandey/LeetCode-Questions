class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int m=s.size();
        int n1=s[m-1]-'0';
        int n2=s[m-2]-'0';
        return n1*n2;
    }
};