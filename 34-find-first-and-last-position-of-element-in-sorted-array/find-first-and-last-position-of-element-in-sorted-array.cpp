class Solution {
public:

    int firstPosition(vector<int> &nums, int target){

        int start = 0, end = nums.size()-1, mid;
        int first = -1;

        while(start<=end){
             
             mid = start + (end-start) / 2;

             if(nums[mid] == target){
                first = mid;
                end = mid-1;
             }
             else if(nums[mid] < target) start = mid +1;
             else end = mid -1;
        }
        return first;
    }
    int lastPosition(vector<int> &nums, int target){
        int start = 0, end = nums.size()-1, mid;
        int last = -1;

        while(start<=end){
             
             mid = start + (end-start) / 2;

             if(nums[mid] == target){
                last = mid;
                start = mid + 1;
             }
             else if(nums[mid] < target) start = mid +1;
             else end = mid -1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        return {firstPosition(nums, target), lastPosition(nums,target)};
    }
};