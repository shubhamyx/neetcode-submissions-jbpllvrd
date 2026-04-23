class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=matrix.size();  int j=matrix[0].size();
        int l=0; int r=(i*j -1);

        while(l<=r){
            int mid=(l+r)/2;
            int  row=mid/j; int col=mid % j;

            if(matrix[row][col]==target){
                return true;
            }
            else if(target>=matrix[row][col]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        } 
        return false;
    }
};
