class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
          vector<int> ans;

          int N = matrix.size();
          int M = matrix[0].size();
          
          int top = 0;
          int left = 0;
          int right = M-1;
          int bottom = N-1;
          while(top<=bottom && left<=right){
             
              
              for(int j=left;j<=right;j++){
                    ans.push_back(matrix[top][j]);
              }
              top++;
              for(int j=top;j<=bottom;j++){
                    ans.push_back(matrix[j][right]);
              }
              right--;
              
              if(top<=bottom)
              {
                 for(int j=right;j>=left;j--){
                    ans.push_back(matrix[bottom][j]);
                  }
                  bottom--;
              }
              
             if(left<=right){
                for(int j=bottom;j>=top;j--){
                ans.push_back(matrix[j][left]);
              }
               left++;
             }
            
              

          }

          return ans;
    }
};