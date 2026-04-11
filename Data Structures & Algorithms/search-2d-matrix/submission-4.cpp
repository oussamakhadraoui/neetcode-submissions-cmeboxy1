class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i =0;int j = n*m-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int col= mid/m;
            int row= mid%m;
            if(matrix[col][row]==target)return true;
            if(matrix[col][row]>target){
                j=mid-1;
            }else{
                i=mid+1;
            }
        }
        return false;

    }
};
