class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int count = 0;
        unordered_set<int> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < k) return -1;

            else if(nums[i] > k) st.insert(nums[i]);
        }

        return st.size();
    }
};