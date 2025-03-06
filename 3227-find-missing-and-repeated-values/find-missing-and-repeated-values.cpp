class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
            int size = grid[0].size() * grid.size();
            vector<int> mp(size+1,0);
            
            
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[0].size();j++)
                {
                    mp[grid[i][j]]++;
                }
            }

            vector<int> ans(2);

            for(int i=0;i<mp.size();i++)
            {
                if(mp[i]==0)
                {
                    ans[1]=i;
                }
                if(mp[i]==2)
                {
                    ans[0]=i;
                }
            }

            return ans;

    }
};