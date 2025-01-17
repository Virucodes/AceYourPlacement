class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        
        int n = derived.size();

        //Function to calculate original

        auto isValid = [&](int start){

            vector<int> original(n);

            original[0] = start;

            for(int i=0;i<n-1;i++){
                original[i+1] = original[i] ^ derived[i];
            }

            return (original[0] ^ original[n-1])==derived[n-1];
        };

        return isValid(0) || isValid(1);
    }
};