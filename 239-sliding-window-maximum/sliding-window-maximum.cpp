class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int i=0;
        int j=0;

        deque<int> q;
        vector<int> ans;

        if(k > nums.size()){
            ans.push_back(*max_element(nums.begin(),nums.end()));
            return ans;
        }


        while(j < nums.size()){

             while(!q.empty() && q.back() < nums[j]){
                 q.pop_back();
             }
             q.push_back(nums[j]);

             if(j-i+1 < k) j++;

             else if(j-i+1==k){
                 ans.push_back(q.front());
                 cout<<q.front()<<endl;
                 if(q.front() == nums[i]){
                    q.pop_front();
                 }
                 i++;
                 j++;
             }
        }
        return ans;
    }
};