class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // unordered_map<int,int> mp;

        // for(int num:nums){

        //     mp[num]++;
        // }
        // for(auto pair:mp){

        //     if(pair.second > (nums.size())/2) return pair.first;
        // }
        // return false;


        //moore voting algorithm

        int count  = 0;
        int element = 0;

        for(int i=0;i<nums.size();i++)
        {
            if(count == 0)
            {
                element = nums[i];
                count++;
            } 
            else if(nums[i] == element) count++;

            else if(nums[i] != element){
                count--;
                if(count==0)element = nums[i];
            }
           
        }
        return element;

        

    }
};