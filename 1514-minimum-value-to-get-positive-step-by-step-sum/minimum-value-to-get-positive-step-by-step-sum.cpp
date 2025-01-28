class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
       int n = nums.size();
       vector<int> prefix(n);

       prefix[0] = nums[0];
       int minele = nums[0];
       for(int i=1;i< nums.size();i++){
            
            prefix[i] = prefix[i-1] + nums[i];
            minele = min(minele,prefix[i]);
       }

       return minele < 0? abs(minele)+1:1;





    }
};