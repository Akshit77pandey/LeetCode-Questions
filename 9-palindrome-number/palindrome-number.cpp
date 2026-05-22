class Solution {
public:
    bool isPalindrome(int x) {
        long a=0;int temp=x;int y;
        if(x<0){
            return false;
        }
        while(x>0){
            y=x%10;
            a=a*10+y;
            x=x/10;
        }
            return temp==a;
        }
};