class Solution {
    public int missingNumber(int[] nums) {
        int n= nums.length;
        int total_sum = n*(n+1)/2;

        int current_sum =0;
        for(int i=0;i<n;i++)
        {
            current_sum+= nums[i];

        }

        return total_sum-current_sum;
    }
}