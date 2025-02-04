class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        

        int minEle = *min_element(nums.begin(), nums.end());
        int maxEle = *max_element(nums.begin(), nums.end());


        int minIndex = 0;
        int maxIndex = 0;

        int n = nums.size();

        for(int i=0;i< nums.size(); i++){
             
             if(nums[i] == minEle){
                minIndex = i;
             }
             if(nums[i] == maxEle){
                maxIndex = i;
             }
        }


        //remove from front

        int front = max(minIndex, maxIndex) + 1;

        //remove from back

        int back = n - min(minIndex, maxIndex);

        //remove from both side

        int both = n - max(maxIndex, minIndex) + min(maxIndex,minIndex)+1;

        return min(min(front,back),both);
    }
};