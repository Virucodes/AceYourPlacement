class Solution {
public:
    bool canPartition(vector<int>& nums) {
        

       int tsum = 0;
       for(int num : nums)
       {
            tsum+=num;
       }

       if(tsum%2!=0) return false;



       int target = tsum/2;

       vector<bool> dp(target+1, false);
       dp[0] = true;

       for(int num: nums){
          
          for(int j= target; j>=num; j--)
          {
            dp[j] = dp[j] || dp[j-num];
          }
       }

       return dp[target];


        
    }
};