class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int totalProduct = 1;
        int zero_count = 0;

        for(int i= 0; i < nums.size(); i++){
            if(nums[i]!=0)totalProduct*= nums[i];
            else zero_count++;
        }

        vector<int> ans(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            int remainProduct =  totalProduct;
            if(nums[i]!=0 && zero_count==0)
            {
                remainProduct = totalProduct/nums[i];
                ans[i]=remainProduct;
               
            } 
            else if(nums[i]==0 && zero_count==1){
                ans[i]=totalProduct;
            }
            else{
                 ans[i]=0;
            }
           
            
        }
        return ans;
    }
};