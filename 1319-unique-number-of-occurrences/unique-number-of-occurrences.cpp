class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;

        for(auto&x:arr){
            map[x]++;
        }
        unordered_set<int>set;
        for(auto&it:map){
            int freq=it.second;
            if(set.find(freq)!=set.end()){
                return false;
            }
            set.insert(freq);
        }
        return true;
    }
};