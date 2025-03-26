class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<int> total;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                total.push_back(grid[i][j]);
            }
        }

        

        for(int num: total)
        {
            if((num-total[0]) % x !=0) return -1;
        }

        sort(total.begin(),total.end());
        

        int median = total[total.size()/2];
        

        int count = 0;
        for(int i=0;i<total.size();i++)
        {

            count += abs(median-total[i])/x;

            cout<<total[i] << " " <<count<<endl;
        }
        return count;
    }
};