class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()<=0)
            return false;
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        while(i<row&&j>=0){
            if(matrix[i][j]>target)
            j--;
            else if(matrix[i][j]<target)
            i++;
            else
            return true;
        }
        return false;
    }
};