class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
       int n = nums.size();
       vector<int> positive(n);
       vector<int> negative(n);
       vector<int> ans(n);

       for(int i=n-1;i>=0;i--){
           
           if(nums[i]>0) positive.push_back(nums[i]);
           else negative.push_back(nums[i]);
       }

       
       for(int i=0;i<n;i++)
       {
           if(i%2==0){
                ans[i]= positive.back();
                positive.pop_back();
           } 
           else{
               ans[i] = negative.back();
               negative.pop_back();
           }
           
       }

       return ans;


    }
};