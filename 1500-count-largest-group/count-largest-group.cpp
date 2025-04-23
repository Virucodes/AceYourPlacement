#include <algorithm> 
class Solution {
public:
    int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10;        
    }
    return sum;
    }
    int countLargestGroup(int n) {
        
        vector<vector<int>> mp(40);

        for(int i=1;i<=n;i++){
            mp[sumOfDigits(i)].push_back(i);
        }

        int max_size = 0;

        for(int i=0;i<mp.size();i++)
        {
          max_size = max(max_size, static_cast<int>(mp[i].size()));

        }

        int count = count_if(mp.begin(), mp.end(), [&](const vector<int>& group) {
        return group.size() == max_size;
        });

        return count;

    }
};