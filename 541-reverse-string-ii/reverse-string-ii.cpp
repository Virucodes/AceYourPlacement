class Solution {
public:
    string reverseStr(string s, int k) {
        
        if(s.length() < k){
            reverse(s.begin(), s.end());
            return s;
        }

        int slow  = 0;
        int fast = 2*k-1;


        while(fast < s.length()){

            reverse(s.begin()+slow, s.begin()+slow+k);
            slow = fast+1;
            fast += 2*k;
        }

        if(slow < s.length() && slow+k < s.length()){
            reverse(s.begin()+slow, s.begin()+slow+k);
        }
        else{
            reverse(s.begin()+slow, s.end());
        }

        return s;
    }
};