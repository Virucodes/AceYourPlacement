class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;

        unordered_map<string,vector<string>> mp;
        for(auto &str: strs)
        {
            string original = str;
            sort(str.begin(),str.end());
            mp[str].push_back(original);
        }

        for(auto &pair: mp)
        {
            ans.push_back(pair.second);
        }

        return ans;
    }
};