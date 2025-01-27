class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();

        int prefix[n];
        
        prefix[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i] = prefix[i-1] + nums[i];
        }

        unordered_map<int,int> mp;
        mp[0] = -1;
        for(int i=0;i<n;i++){

            int modval = prefix[i] % k;

            if(modval < 0)
            {
                modval +=k;
            }
             
             if(mp.find(modval) != mp.end()){
                   
                   if(i - mp[modval] >=2) return true;
             }
            else mp[modval] = i;
        }

        return false;


    }
};