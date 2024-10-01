class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        map<int,int> m;

        for(auto &a: arr)
        {
            if(a<0) m[(a%k)+k]++;
            m[a%k]++;

        }

        if(m[0]%2!=0) return false;

        for(int i=1;i<k;i++) if(m[i]!=m[k-i]) return false;

        return true;
    
    }
};