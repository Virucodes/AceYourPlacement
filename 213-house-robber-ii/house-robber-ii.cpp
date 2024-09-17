class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==0) return 0;

        if(nums.size()==1) return nums[0];

        if(nums.size()==2)  return max(nums[0],nums[1]);
        

        auto roblinear = [](const vector<int> &houses)
        {
            int prev=0,curr=0;
            int temp=0;
            for(auto money:houses)
            {
                temp = max(curr,prev+money);
                prev = curr;
                curr = temp;
            }
            return curr;
        };




        vector<int> num1(nums.begin(),nums.end()-1);
        vector<int> num2(nums.begin()+1,nums.end());

        return max(roblinear(num1),roblinear(num2));
    }
};




