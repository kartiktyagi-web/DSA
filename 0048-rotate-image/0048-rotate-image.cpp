class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        //  this is to transpose the matrix
        for(int i =0 ;i< n ;i++){
             for(int j = i+1;j< n ;j++){
            swap(matrix[i][j],matrix[j][i]);
        }}
            // this is to reverse a matrix
        for(int i =0 ;i< n ;i++){
           
                reverse(matrix[i].begin(),matrix[i].end());

            }
        
    }
};