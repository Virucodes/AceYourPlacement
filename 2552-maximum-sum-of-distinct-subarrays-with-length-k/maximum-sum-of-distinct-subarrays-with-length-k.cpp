class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        
        long long sum = 0;
        long long maxele = 0;
        unordered_map<int,int> mp;

        int i=0;
        int j=0;

        while(j<arr.size())
        {
            
            sum += arr[j];
            mp[arr[j]]++;

            if(j-i<k) j++;

            else if(j-i==k)
            {
                
                sum-= arr[i];
                mp[arr[i]]--;
                if(mp[arr[i]]==0){
                    mp.erase(arr[i]);
                }
                i++;
                j++;
            }

            if(mp.size()==k)
            {
                maxele = max(maxele,sum);
            }

            


        }

        return maxele;
    }
};