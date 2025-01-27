class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left = 0;
        int right = 0;
        int sum =0;
        int res = INT_MAX;


        while(right< nums.size()){
            
            sum+= nums[right];
            while(sum >= target && left>=0){
                sum -= nums[left];
                res = min(res, right-left+1);
                left++;
            }
            right++;
        }

        return res==INT_MAX?0:res;
    }

};