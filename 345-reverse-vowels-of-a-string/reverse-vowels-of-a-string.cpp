class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        stack<char>st;
        for(char &ch:s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' ||ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U'){
                st.push(ch);
            }
        }
        for(char &ch:s){
             if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||
            ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
                ch=st.top();
                st.pop();
            }
        }
        return s;
    }
};