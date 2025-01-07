class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        set<string> ans;
        for(int i=0;i<words.size();i++){

            for(int j=0;j<words.size();j++){
                if(i==j) continue;

                if(words[i].length()<words[j].length())
                {
                    if(words[j].find(words[i])!=string::npos) ans.insert(words[i]);
                }
            }
        }
        vector<string> res(ans.begin(),ans.end());

        return res;
    }
};