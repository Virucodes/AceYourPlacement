class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // int totalProduct = 1;
        // int zero_count = 0;

        // for(int i= 0; i < nums.size(); i++){
        //     if(nums[i]!=0)totalProduct*= nums[i];
        //     else zero_count++;
        // }

        // vector<int> ans(nums.size());

        // for(int i=0;i<nums.size();i++)
        // {
        //     int remainProduct =  totalProduct;
        //     if(nums[i]!=0 && zero_count==0)
        //     {
        //         remainProduct = totalProduct/nums[i];
        //         ans[i]=remainProduct;
               
        //     } 
        //     else if(nums[i]==0 && zero_count==1){
        //         ans[i]=totalProduct;
        //     }
        //     else{
        //          ans[i]=0;
        //     }
           
            
        // }
        // return ans;

        int prefixProduct = 1;
        int suffixProduct = 1;
        vector<int> ans(nums.size(),1);

        for(int i=0;i< nums.size();i++){
            ans[i]*= prefixProduct;
            prefixProduct*=nums[i];
        } 
        for(int i= nums.size()-1; i>=0; i--){
            ans[i]*= suffixProduct;
            suffixProduct*=nums[i];
        }
        return ans;

    }
};