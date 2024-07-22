class Solution {
public:
    bool canJump(vector<int>& nums) {
       int num = nums[0];
       for(int i=0;i<nums.size();i++)
       {
          if(num<i)
           return false;
          else
        {
             num = max(i+nums[i],num);
        }
       }
       return true;
           
           
    }
};