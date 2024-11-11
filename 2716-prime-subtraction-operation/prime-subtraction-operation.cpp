class Solution {
public:
    bool isPrime(int num)
    {
        if(num<=1) return false;
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)return false;
        }
        return true;
    }

    int largestPrime(int n)
    {
        for(int i=n-1;i>=2;i--)
        {
            if(isPrime(i)) return i;
        }
        return -1;
    }
    bool primeSubOperation(vector<int>& nums) {
        
        
        for(int i=0;i<nums.size();i++)
        {
             int bound = (i==0)?nums[i]:nums[i]-nums[i-1];

             if(bound<=0)return false;

              int largestPrime = 0;
            for (int j = bound - 1; j >= 2; j--) {
                if (isPrime(j)) {
                    largestPrime = j;
                    break;
                }
            }
             nums[i]-=largestPrime;
        }
        return true;
    }


};