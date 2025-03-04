class Solution {
public:
    bool checkPowersOfThree(int n) {
        
        vector<int> mp(3);

        while(n!=0)
        {
            
            int rem = n%3;
            mp[rem]=1;
            n /= 3;
        }

        if( mp[2]==1){
            return false;
        }
        else{
            return true;
        }

    }
};