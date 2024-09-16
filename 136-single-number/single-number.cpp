class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map(nums.size());

        // for(int i=0;i<nums.size();i++)
        // {
        //     map[nums[i]]++;
        // }

        // for(auto &pair:map)
        // {
        //     if(pair.second==1) return pair.first;
        // }

        // return -1;

        
         int Xor = 0;

         for(int i=0;i<nums.size();i++)
         {
            Xor ^= nums[i];
         }

       
        return Xor;
    }
};