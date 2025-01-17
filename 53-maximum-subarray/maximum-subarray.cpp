class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
         // Brutforce is traverse each time to find subarray and make sum

         //best and take sum of number in second for loop

         //optimal use kadane's algo O(N)

         int maxEnding = nums[0];
         int maxSum = nums[0];

         for(int i=1;i<nums.size();i++){

               
               maxEnding = max(maxEnding + nums[i], nums[i]);
               maxSum = max(maxSum, maxEnding);
            
         }
         return maxSum;
    }
};