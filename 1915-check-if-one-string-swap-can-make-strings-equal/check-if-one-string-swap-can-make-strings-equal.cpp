class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
            
            if(s1 == s2){
                return true;
            }


            int mismatch = 0;

            map<char, int> mp1;
            map<char, int> mp2;

            
            bool done = false;

            for(int i =0;i<s1.length();i++){

                mp1[s1[i]]++;
                mp2[s2[i]]++;
                if(s1[i] != s2[i])
                {
                    mismatch++;
                    char a,b;
                    if(mismatch==1){
                        a = s1[i];
                        b = s2[i];
                    }
                    if(mismatch==2){
                        
                        if(s1[i] == b && s2[i] == a){
                            done = true;
                        }
                    }
                }
            }

            if(mismatch == 0 || (mismatch==2 && done)){
                return true;
            }

            return false;

           



          

    }
};