class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int pivot = -1;
        int N = nums.size();

        for(int i=N-2;i<nums.size();i--){

            if(nums[i+1] > nums[i]){
                pivot = i;
                break;
            }
        }

        if(pivot == -1){
             reverse(nums.begin(),nums.end());
             return;
        }
        reverse(nums.begin()+pivot+1,nums.end());
        cout<<pivot<<nums[pivot]<<endl;

        for(int i=pivot+1;i<N;i++){

            if(nums[i] > nums[pivot]){
                cout<<nums[i]<<endl;
                swap(nums[i],nums[pivot]);
                pivot = i;
                break;
            }
        }

        
    }
};