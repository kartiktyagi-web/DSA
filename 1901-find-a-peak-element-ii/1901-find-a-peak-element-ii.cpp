class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int lo = 0, hi = n - 1;
        
        while (lo <= hi) {
            int midCol = lo + (hi - lo) / 2;
            
           
            int maxRow = 0;
            for (int i = 0; i < m; i++) {
                if (mat[i][midCol] > mat[maxRow][midCol])
                    maxRow = i;
            }
            
            int left  = midCol > 0     ? mat[maxRow][midCol - 1] : -1;
            int right = midCol < n - 1 ? mat[maxRow][midCol + 1] : -1;
            
            if (mat[maxRow][midCol] > left && mat[maxRow][midCol] > right)
                return {maxRow, midCol};
            else if (left > mat[maxRow][midCol])
                hi = midCol - 1;
            else
                lo = midCol + 1;
        }
        
        return {-1, -1};
    }
};