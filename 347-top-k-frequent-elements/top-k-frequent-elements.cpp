class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }

        auto cmp = [](pair<int,int>& a, pair<int,int>& b){
             return a.second<b.second;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);
        for(const auto &pair:mp){
            pq.push(pair);
        }
        
        while(k-- && !pq.empty())
        {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};