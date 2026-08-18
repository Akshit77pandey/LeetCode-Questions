class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>> pq;
        unordered_set<char> mp;
        string ans = "";
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) == mp.end()) {
                pq.push({(int)count(s.begin(), s.end(), s[i]), s[i]});
                mp.insert(s[i]);
            }
        }

        while (pq.size() > 0) {
            auto a = pq.top();
            int second = a.first; 
            char first = a.second; 
            
            int i = 0;
            while (i < second) {
                ans += first;
                i++;
            }
            pq.pop();
        }

        return ans;
    }
};