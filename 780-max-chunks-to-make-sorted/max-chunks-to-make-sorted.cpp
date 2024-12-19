class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int count=0;
        int max_so_far = INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            max_so_far = max(arr[i],max_so_far);

            if(max_so_far==i) count++;
        }

        return count;
    }
};