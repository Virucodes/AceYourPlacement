class Solution {
    public int missingNumber(int[] nums) {
        // int n= nums.length;
        // int total_sum = n*(n+1)/2;

        // int current_sum =0;
        // for(int i=0;i<n;i++)
        // {
        //     current_sum+= nums[i];

        // }

        int n = nums.length;

        int total_sum =0;
        int current_sum = 0;
        
        for(int i=0;i<n;i++)
        {
            current_sum ^= nums[i];
            total_sum ^= (i+1);
        }
     
        return total_sum^current_sum;
    }
}