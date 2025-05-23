class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // int times = nums.size() / 3;


        // unordered_map<int,int> mp;

        // int start = 0;

        // for(int i=0; i < nums.size() ;i++)
        // {
        //         mp[nums[i]]++;

        //         if(mp[nums[i]] > times)
        //         {
        //             nums[start] = nums[i];
        //             start++;
        //         }
        // }

        // int *ptr = &nums[start];

        // size_t newSize = ptr - &nums[0];

        
        // nums.resize(newSize);
        // nums.shrink_to_fit();
        
        // return nums;


        int candidate1 = -1;
        int candidate2 = -1;
        int count1 = 0;
        int count2 = 0;
        int n = nums.size();


        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == candidate1)
            {
                
                count1++;
            }
            else if(nums[i] == candidate2)
            {
                
                count2++;
            }

            else if(count1 == 0)
            {
                candidate1 = nums[i];
                count1++;
            }

            else if(count2 == 0)
            {
                candidate2 = nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }


        count1 = count2 = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == candidate1)
            {
                count1++;
            }

            else if(nums[i]== candidate2)
            {
                count2++;
            }
        }


        vector<int> result;


        if(count1 > n/3)
        {
            result.push_back(candidate1);
        }

        if(count2 > n/3 && candidate1 != candidate2){
            result.push_back(candidate2);
        }


        return result;



    }
};

        