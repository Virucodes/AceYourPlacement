class Solution {
public:
    int minimumLength(string s) {
        
        vector<int> mp(26,0);
        int ans = 0;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]-'a']++;

        }
       

        for(int i=0;i<mp.size();i++)
        {
           
           if(mp[i]>0) ans+= mp[i]%2==0?2:1;

        }
        return ans;


    }
};