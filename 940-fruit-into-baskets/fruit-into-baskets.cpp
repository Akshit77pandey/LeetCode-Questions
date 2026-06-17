class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        map<int, int> mp; 
        int left = 0;
        int right = 0;
        int count = 0;
        int maxcount = 0;
        
        while(right < n){
            mp[fruits[right]]++;
            count++;
            right++;
            
            while(mp.size() > 2){
                mp[fruits[left]]--; 
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]); 
                }
                left++;
                count--;
            }
            
            maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};