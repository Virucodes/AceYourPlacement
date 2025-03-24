class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        
        sort(meetings.begin(),meetings.end());

        vector<vector<int>> merged;

        for(auto &interval : meetings)
        {
            if(merged.empty() || merged.back()[1] < interval[0])
                merged.push_back(interval); //no overlap
            else{
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        int freedays = 0;
        for(auto &pair: merged)
        {
            freedays += pair[1] - pair[0] +1;
        }

        return days-freedays;

        
    }
};