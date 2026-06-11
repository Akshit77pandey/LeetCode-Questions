class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost_match;
        for(int i=0;i<matches.size();i++){
            int loser=matches[i][1];
            lost_match[loser]++;
        }

        vector<int>neverlost;
        vector<int>lostonce;

        for(int i=0;i<matches.size();i++){
            int winner=matches[i][0];
            int loser=matches[i][1];

            if(lost_match.find(winner)==lost_match.end()){
                neverlost.push_back(winner);
                lost_match[winner]=2;
            }

            if(lost_match[loser]==1){
                lostonce.push_back(loser);
            }
        }

        sort(begin(neverlost),end(neverlost));
        sort(begin(lostonce),end(lostonce));
        
        return {neverlost,lostonce};
    }
};