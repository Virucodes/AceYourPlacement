class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i = 0;
        int j = 0;

        int m = t.length();
        int n = s.length();

       
        while(i < m){
            if( j < n && s[j] == t[i]){
                j++;
            }
            
            i++;
        }
        return j == n;

    //      int i = 0, j = 0;
    // int n = s.length(), m = t.length();
    
    // while (j < m) {
    //     if (i < n && s[i] == t[j]) {
    //         i++;  // Move to the next character in s1
    //     }
    //     j++;  // Always move in s2
    // }
    
    // return i == n;
        
    }
};