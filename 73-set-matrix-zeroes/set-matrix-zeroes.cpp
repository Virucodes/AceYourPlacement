class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int N = matrix.size();
        int M = matrix[0].size();
        vector<int> rows(N);
        vector<int> cols(M);

        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                 
                 if(matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                 }
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                 
                 if(rows[i] || cols[j]){
                     matrix[i][j] = 0;
                 }
            }
        }
    }
};