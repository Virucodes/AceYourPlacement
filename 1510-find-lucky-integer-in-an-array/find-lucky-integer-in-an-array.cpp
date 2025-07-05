class Solution {
public:
    int findLucky(vector<int>& arr) {

        for (int num : arr) {
            int index = num & 1023;
             if (index - 1 < arr.size()) { arr[index - 1] += (1 << 10); }
        }

        int ans = -1;

        for (int i = 0; i < arr.size(); ++i) {
            int freq = arr[i] >> 10;
            int val = i + 1;
            if (freq == val) {
                ans = val;
            }
        }

        return ans;
    }
};