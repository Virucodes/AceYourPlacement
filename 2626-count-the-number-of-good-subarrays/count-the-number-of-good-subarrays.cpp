class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        
        

        int i=0;
        int j=0;

        long long goodSubarrays = 0;
        

        int pairs = 0;

        while(j < nums.size())
        {
            mp[nums[j]]++;

            if(mp[nums[j]] > 1)
            {
                pairs+= mp[nums[j]] - 1;
            }

            while(pairs >= k)
            {
                goodSubarrays += nums.size() - j;
                mp[nums[i]]--;

                if(mp[nums[i]] > 0)
                {
                    pairs -= mp[nums[i]];
                }

                i++;
            }

            j++;
        }

        return goodSubarrays;

    }
};