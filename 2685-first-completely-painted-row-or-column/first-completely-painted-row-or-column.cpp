class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        map<int,pair<int,int>> mp;
        

        int col = mat[0].size();
        int row = mat.size();

        vector<int> rowCount(row),colCount(col);

        
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                     int value = mat[i][j];
                     mp[value] = {i,j};
                }
            }

            for(int i=0;i<arr.size();i++)
            {
                int num = arr[i];

                auto [rows,cols] = mp[num];

                rowCount[rows]++;
                colCount[cols]++;

                if(rowCount[rows] == col || colCount[cols] == row) return i;



            }

            return -1;
        
    }
};