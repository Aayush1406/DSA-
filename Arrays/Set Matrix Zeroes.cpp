// 1. take a DS(multimap as it can store duplicate keys) and store the indexes of rows and columns where you get 0's.
// 2. now loop over the map and toggle the indices to 0 as per the map values.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool flag = false;
        multimap<int,int> mpp;
        for(int i=0;i<matrix.size();i++){

            for(int j=0;j<matrix[0].size();j++){

                if(matrix[i][j]==0){

                    mpp.insert({i,j});

                }
            }

        }

        for(auto el: mpp){
            int r = el.first, c = el.second;

            for(int i=0;i<matrix.size();i++){
                matrix[i][c] =0;
            }

            for(int i=0;i<matrix[0].size();i++){
                matrix[r][i] = 0;
            }
        }
        
    }

};
