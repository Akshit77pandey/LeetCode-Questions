#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> freq(26, 0);

        for (char ch : s) {
            
            freq[ch - 'a']++;
        }

        string fh = "";
        string mid = "";

        for (int i = 0; i < 26; i++) {

            if (freq[i] % 2 != 0) {

                mid = i+'a';
            }

            fh.append(freq[i] / 2, 'a' + i);
        }

        string sh = fh;

        std::reverse(sh.begin(), sh.end());

        return fh + mid + sh;
    }
};