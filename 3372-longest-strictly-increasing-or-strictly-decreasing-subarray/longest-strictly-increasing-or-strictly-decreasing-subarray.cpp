class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int i=0;
        int maxele = 1;

        if(nums.size() == 1){
            return 1;
        }
        int count = 1;
        for(int i=1;i<nums.size();i++){

            if(nums[i] > nums[i-1])
            {
                count++;
            }
            else{
                count = 1;
            }
            maxele = max(count,maxele);

        }
       count = 1;
        for(int i=nums.size()-2;i>=0;i--){

            if(nums[i] > nums[i+1])
            {
                count++;
            }
            else{
                count = 1;
            }
            maxele = max(count,maxele);

        }


        return maxele;

       
    }
};