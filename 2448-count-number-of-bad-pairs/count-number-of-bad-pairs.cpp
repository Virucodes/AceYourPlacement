class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        long long n = nums.size();
        long long count = 0;
        for(int i=0;i< nums.size();i++){
             
             int key = nums[i] - i;
             count += mp[key];
             mp[key]++;
        }

        return (n * (n - 1)) / 2 - count;

    }
};