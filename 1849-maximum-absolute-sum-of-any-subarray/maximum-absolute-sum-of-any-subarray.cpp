class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
        int sum = 0;

        int maxsum = 0;

        int minsum = 0;


        for(int i=0;i<nums.size();i++){
             
             sum += nums[i];
             maxsum= max(sum,maxsum);

             minsum = min(sum, minsum);

        }

        return maxsum-minsum;
    }
};