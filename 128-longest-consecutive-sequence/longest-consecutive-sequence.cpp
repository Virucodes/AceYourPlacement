class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st;
        int longest = 0;

        for(int i=0;i<nums.size();i++){

             st.insert(nums[i]);
        }

        for(auto i: st){

             if(st.find(i-1) == st.end()){
                   
                   int x = i;
                   int cnt = 1;

                   while(st.find(x+1) != st.end()){
                        cnt += 1;
                        x += 1;
                   }

                   longest = max(longest,cnt);
             }
        }

        return longest;

    }
};