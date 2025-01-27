class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int i = 0;
        int j = 0;
        int zero_count = 0;
        int one_count = 0;
        int max_one = 0;

        while (j < nums.size()) {

            if (nums[j] == 0) {
                zero_count++;
            }

            while (zero_count > k) {

                if (nums[i] == 0) {
                    zero_count--;
                }
                i++;
            }
            max_one = max(j - i + 1, max_one);
            j++;
        }
        return max_one;
    }
};