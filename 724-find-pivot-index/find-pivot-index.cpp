class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        // int totalSum = 0;

        // for(int i=0;i<nums.size();i++){

        //     totalSum += nums[i];
        // }

        // int leftSum = 0;
        // int rightSum =0;

        // for(int i=0;i<nums.size();i++){

            
        //     rightSum = totalSum - leftSum;

        //     if(leftSum == rightSum){
        //         return i;
        //     }
        //     else{
        //         leftSum += nums[i];
        //     }
            

        // }

        // return -1;

        int n = nums.size();
        vector<int> ans(n,0);
        int leftSum = 0;
        int rightSum = 0;

        for(int i=n-1;i>=0;i--){
            ans[i] += rightSum;
            rightSum += nums[i];
        }
        for(int i=0;i<n;i++){

            if(leftSum == ans[i]){
                return i;
            }
            leftSum +=nums[i];
        }
        return -1;
    }
};