class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
    //     int N = matrix.size();
    //     int M = matrix[0].size();
    //     vector<int> rows(N);
    //     vector<int> cols(M);

    //     for(int i=0;i<N;i++){
    //         for(int j=0;j<M;j++){
                 
    //              if(matrix[i][j] == 0){
    //                 rows[i] = 1;
    //                 cols[j] = 1;
    //              }
    //         }
    //     }
    //     for(int i=0;i<N;i++){
    //         for(int j=0;j<M;j++){
                 
    //              if(rows[i] || cols[j]){
    //                  matrix[i][j] = 0;
    //              }
    //         }
    //     }
    // }


    //optimal :- in place 


    int N = matrix.size();
    int M  = matrix[0].size();

    //separate the rows and column using extra variable
    int col0 = 1;

    //matrix[--][0] :-row marking
    //matrix[0][--] :-column marking
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;

                if(j != 0)
                   matrix[0][j] = 0;
                else 
                   col0 = 0;
            }
        }
    }

    //Now first complete the part apart from firt row and column
    for(int i=1;i<N;i++){
        for(int j=1;j<M;j++){

            if( matrix[0][j]==0 || matrix[i][0]==0 ){
                    
                    matrix[i][j] = 0;
            }
        }
    }

    //Now first turn all first row to 0 according to matrix[i][0]

    if(matrix[0][0] == 0){
        for(int j=0;j<M;j++){
            matrix[0][j] = 0;
        }
    }

    //Now check if col0 is 0 then turn all first col to 0
    if(col0 == 0){
        for(int i=0;i<N;i++){
            matrix[i][0] = 0;
        }
    }

    }

};