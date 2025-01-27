class NumMatrix {
public:

    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        
        prefix.resize(matrix.size());

        for(int i=0;i<matrix.size();i++){

            prefix[i].resize(matrix[0].size());
        }

        int n= matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 
                if(j==0){
                    prefix[i][j] = matrix[i][j];
                }
                else 
                prefix[i][j] = prefix[i][j-1] + matrix[i][j];
            }
        }


    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        int sum = 0;

        for(int i=row1;i<=row2;i++){
            if(col1 == 0){
                sum+= prefix[i][col2];
                continue;
            }
            sum += prefix[i][col2] - prefix[i][col1-1];
        }

        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */