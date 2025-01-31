class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        // int i = 0;
        // int j = 0;

        // if(s.length() < 1 && t.length() < 1){
        //     return true;
        // }

        // if(s.length() > t.length()){
        //     return false;
        // }

       
        // while(i < t.length()){
        //     if( j< s.length() && s[j] == t[i]){
                
        //         i++;
        //         j++;
        //     }
            
        //     i++;
        // }
        // return j == s.length();

         int i = 0, j = 0;
    int n = s.length(), m = t.length();
    
    while (j < m) {
        if (i < n && s[i] == t[j]) {
            i++;  // Move to the next character in s1
        }
        j++;  // Always move in s2
    }
    
    return i == n;
        
    }
};