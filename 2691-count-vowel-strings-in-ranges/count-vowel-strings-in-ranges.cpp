class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        
        vector<int> ans(queries.size());
        
        unordered_set<char> se = {'a','e','i','o','u'};

        vector<int> prefix_sum(words.size());

        int sum=0;

        for(int i=0;i<words.size();i++){

            string currentWord = words[i];

            if(se.count(currentWord[0]) && se.count(currentWord[currentWord.length()-1])){
                sum++;
            }

            prefix_sum[i]=sum;
        }

        for(int i=0; i<queries.size();i++){
            vector<int> currentQuery = queries[i];
            ans[i]=
                    prefix_sum[currentQuery[1]]-
                    (currentQuery[0]==0?0:prefix_sum[currentQuery[0]-1]);

        }

        return ans;


    }
};