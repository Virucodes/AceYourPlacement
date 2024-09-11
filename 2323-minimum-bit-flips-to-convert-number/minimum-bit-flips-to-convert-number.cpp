class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        
        int xoR = start ^ goal;

        while(xoR!=0)
        {
            count+= xoR&1;

            xoR>>=1;
        }

        return count;
       
    }
};