class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        

        int N = matrix.size();
        int M = matrix[0].size();
        vector<vector<int>> matrix1(M, vector<int>(N));


        for(int i=0;i<N;i++)
        {
            for(int j=0; j<M ;j++){

                matrix1[j][N-i-1] = matrix[i][j];
            }
        }

        matrix = matrix1;
    }
};