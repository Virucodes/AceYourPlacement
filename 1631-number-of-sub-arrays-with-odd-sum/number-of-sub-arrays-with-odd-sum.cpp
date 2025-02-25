class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        
         int odd = 0, even = 1;
         int sum = 0;
         int result = 0;
         int MOD = 1000000007;


         for(int i=0;i<arr.size();i++)
         {
             
              sum += arr[i];


              if(sum % 2 == 1)
              {
                   result = (result+even) % MOD;
                   odd++;
              }
              else{
                  result = (result+odd) % MOD;
                  even++;
              }
         }

         return result;

    }
};