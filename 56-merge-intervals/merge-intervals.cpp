class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());

        int a = intervals[0][0];
        int b = intervals[0][1];
        vector<vector<int>>v;
        for(int i=1;i<intervals.size();i++)
        {
            if( intervals[i][0] <= b)
            {
                b = max(intervals[i][1],b );
                a = min(intervals[i][0],a);

            }else
            {
                v.push_back({a,b});
                a = intervals[i][0];
                b = intervals[i][1];
            }

        }

        v.push_back({a,b});
        return v;


    }
};