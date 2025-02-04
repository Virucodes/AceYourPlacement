class Solution {
public:
    string reverseWords(string s) {
        
        int slow = 0;
        int fast = 0;
        int found = -1;

        while(fast < s.length()){
             
             if(s[fast] == ' ' || fast == s.length()-1)
             {

                found = fast==s.length()-1?s.length()-1:fast-1;
                reverse(s.begin()+slow, s.begin()+found+1);
                slow = fast+1;
             }
             fast+=1;
        }

        return s;
    }
};