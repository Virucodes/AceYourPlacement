class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        sort(citations.begin(),citations.end());
        int n = citations.size();
        int res = 0;
        for(int i= n-1; i>=0; i--){

            if(citations[i] != 0 && citations[i]>= (n-i)){
                res = n-i;
            }

        }

        return res;



        

        
    }
};