class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
    //     int i=0;
    //     int maxele = 1;

    //     if(nums.size() == 1){
    //         return 1;
    //     }
    //     int count = 1;
    //     for(int i=1;i<nums.size();i++){

    //         if(nums[i] > nums[i-1])
    //         {
    //             count++;
    //         }
    //         else{
    //             count = 1;
    //         }
    //         maxele = max(count,maxele);

    //     }
    //    count = 1;
    //     for(int i=nums.size()-2;i>=0;i--){

    //         if(nums[i] > nums[i+1])
    //         {
    //             count++;
    //         }
    //         else{
    //             count = 1;
    //         }
    //         maxele = max(count,maxele);

    //     }


    //     return maxele;

        if(nums.size() ==1){
            return 1;
        }
        int INC_MAX  = 1;
        int DEC_MAX = 1;

        int inc = 1;
        int dec = 1;

        for(int i = 0;i<nums.size()-1;i++){
             
             if(nums[i] < nums[i+1])
             {
                inc++;
                INC_MAX = max(INC_MAX, inc);
             }
             else{
                
                inc = 1;
             }
             if(nums[i] > nums[i+1])
             {
                dec++;
                DEC_MAX = max(DEC_MAX, dec);
             }
             else{
                
                dec = 1;
             }

        }

        return max(INC_MAX, DEC_MAX);



       
    }
};