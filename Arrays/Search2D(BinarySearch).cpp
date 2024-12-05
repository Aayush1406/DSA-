class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans  = binarySearch(matrix,0,matrix.size() * matrix[0].size() - 1,target);

        return ans;
    }


    bool binarySearch(vector<vector<int>>& matrix, int s, int e, int t){

        if(s>e){
            return false;
        }else{
            int midpt = (s+e)/2;
            int r = midpt / (matrix[0].size());
            int c = midpt % (matrix[0].size());
            if(matrix[r][c] == t){
                return true;
            }

            else if(t<matrix[r][c]){
                return binarySearch(matrix, s, midpt-1, t);
            }

            else{
                return binarySearch(matrix, midpt+1, e, t);
            }
        }
    }
};
