class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        

        int N = matrix.size();
        int M = matrix[0].size();
        vector<vector<int>> matrix1(M, vector<int>(N));


        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1; j<M;j++){

                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<N;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        

        
    }
};