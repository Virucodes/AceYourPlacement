class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        
         int n = A.size();
         unordered_set<int> As,Bs;
         vector<int> ans(n);
         for(int i=0;i<n;i++)
         {
            As.insert(A[i]);
            Bs.insert(B[i]);
            
            int count =0;
            for(int ele: As)
            {
                if(Bs.count(ele)) count++;
            }
            ans[i]=count;
         }
         return ans;
         

    }
};