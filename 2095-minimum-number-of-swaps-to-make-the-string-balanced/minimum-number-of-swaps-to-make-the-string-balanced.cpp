class Solution {
public:
    int minSwaps(string s) {
        int i =0;

        for(int j=0;j<s.length();j++)
        {
              if(s[j]=='[') i++;
              else if(s[j]==']' && i>0) i--;
        }

        return (i+1)/2;
    }
};