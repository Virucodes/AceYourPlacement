class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count = 0;
        int n = nums.size();

        if(nums[n-1] > nums[0] ){
            count++;
        }

        for(int i=0;i<n-1;i++){
            if(nums[i] > nums[i+1])
            {
                count++;
            }
        }

        if(count>=2){
            return false;
        }
        return true;
    }
};