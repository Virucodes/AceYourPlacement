class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maX = INT_MIN;
        int count=0,i;
        for( i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                
                maX = max(maX,count);
                count=0;
            }
            else
            count++;

        }
        if(i==nums.size())  maX = max(maX,count);
        return maX;

    }
};