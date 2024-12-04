// 1. swap opposite elements.
// 2. reverse each vector.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        for(int i=0;i<matrix.size();i++){

            for(int j=i+1;j<matrix.size();j++){

                swap(matrix, i, j);
            }
        }

        for(int i=0;i<matrix.size();i++){

            reverse(matrix[i].begin(), matrix[i].end());
        }

    }

    void swap(vector<vector<int>>&matrix, int i, int j){

        int tmp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = tmp;
    }
};
