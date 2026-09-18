class Solution {
public:
    int countHomogenous(string s) {
        int result=0;
        int length=0;
        int n=s.size();
        int MOD=1e9 + 7;

        for(int i=0;i<n;i++){
             if(i>0 && s[i]==s[i-1]){
                length+=1;
             }
             else{
                length=1;
             }
             result=(result+length)%MOD;
        }
        return result;
    }
};