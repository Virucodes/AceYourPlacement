class Solution {
public:
    int search(vector<int>& arr, int target) {
        
        int start = 0, end = arr.size()-1, mid;

        while(start <= end){
             
             mid = start + (end-start)/2;

             if(arr[mid] == target)
             {
                return mid;
             }
             else if(arr[mid] >= arr[0])
             {
                if(arr[0] <= target && arr[mid] >= target)
                {
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
             }
             else{

                if(arr[mid] <= target && arr[arr.size()-1] >= target)
                {
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
             }
        }
        return -1;
    }
};