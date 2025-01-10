class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = 2 * nums.size();

        vector<int> ans(n);
        int i=0;
        int j= nums.size();
        while(i<nums.size())
        {
            ans[i] = ans[j] = nums[i];
            i++;
            j++;
        }
        return ans;

    }
};