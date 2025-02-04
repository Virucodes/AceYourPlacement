class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        

        if(nums.size() == 1){
            return nums[0];
        }


        int sum = nums[0];
        int maxSum = nums[0];

        for(int i=1;i<nums.size();i++){
             
             if(nums[i] > nums[i-1])
             {
                sum+=nums[i];
                maxSum = max(sum, maxSum);

             }
             else{
                sum = nums[i];
             }
        }

        return maxSum;
    }
};