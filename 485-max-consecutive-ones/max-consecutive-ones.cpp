class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maX = INT_MIN;
        int count=0,i;
        for( i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
              count=0;
            }
            else
            count++;

            maX = max(maX,count);

        }
       
        return maX;

    }
};