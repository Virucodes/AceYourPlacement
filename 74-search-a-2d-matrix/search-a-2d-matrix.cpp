class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int total_rows = matrix.size()-1;
        // int total_cols = matrix[0].size()-1;

        // int low = 0;
        // int mid = 0;
        // int high = total_rows;

        // while(low<=high)
        // {
        //     mid = (low+high)/2;
        //      if(matrix[mid][total_cols]==target)  return true;

        //      else if(mid][total_cols]<target) 
        // }


        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][0]==target) return true;

            else if(matrix[i][matrix[i].size()-1]==target) return true;

            else if(matrix[i][matrix[i].size()-1]>target)
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]==target) return true;
                }
            }

           


        }
         return false;
    }

};