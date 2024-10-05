class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
        long total_sum = 0;

        for(int i=0;i<nums.size();i++)
        {
            total_sum+=nums[i];
        }

        int target = total_sum%p;
       
        if(target==0) return 0;

        unordered_map<int,int> prefixMod;
        prefixMod[0]=-1;
        long prefixSum=0;
        int minLength = nums.size();
        for(int i=0;i<nums.size();i++)
        {

             int currentMod = (prefixSum+=nums[i])%p;
             int targetMod = (currentMod - target + p)%p;

             if(prefixMod.find(targetMod)!=prefixMod.end())
             {
                  minLength = min(minLength,i-prefixMod[targetMod]);
             }

             prefixMod[currentMod]=i;
        }

        return minLength== nums.size() ? -1 : minLength;

    }
};