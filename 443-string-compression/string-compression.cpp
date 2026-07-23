class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        int i=0;
        while(i<n){
            char currchar=chars[i];
            int count=0;
            while(i<n && chars[i]==currchar){
                count++;
                i++;
            }
            chars[index]=currchar;
            index++;
            if(count>1){
                string countstr=to_string(count);
                for(char &ch:countstr){
                    chars[index]=ch;
                    index++;
                }
            }
        }
        return index;
    }
};