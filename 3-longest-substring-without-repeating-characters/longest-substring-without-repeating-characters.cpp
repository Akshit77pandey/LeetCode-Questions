class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        set<char>st;
        int count=0;
        int left=0;
        int right=0;
        int maxcount=0;
        while(right<n){
            if(st.find(s[right])!=st.end()){
                st.clear();
                count=0;
                right=left;
                left++;
            }
            else{
            st.insert(s[right]);
            right++;
            count++;
            maxcount=max(maxcount,count);
        }
        }
        return maxcount;
    }
};