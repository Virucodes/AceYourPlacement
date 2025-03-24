class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        vector<vector<int>> result;
        int n = nums.size();

        //sort the array

        sort(nums.begin(), nums.end());


        //iterate through array with i,left and right;


        for(int i=0;i<nums.size() - 2;i++)
        {

            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }

            int left = i+1, right = n - 1;

            int currSum = 0;

            while(left < right)
            {
                currSum = nums[i]+ nums[left] + nums[right];

                if(currSum == 0)
                {
                    result.push_back({nums[i],nums[left],nums[right]});

                    while(left < right && nums[left]== nums[left+1])
                        left++;
                    while(left < right && nums[right] == nums[right-1])
                        right--;

                    left++;
                    right--;
                    

                }
                else if(currSum < 0)
                {
                    left++;
                }
                else{
                    right--;
                }
            }
        }

        return result;
    }
};