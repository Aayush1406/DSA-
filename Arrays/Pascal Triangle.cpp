class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> m;
        for(int i=1;i<=numRows;i++){
            vector<int> v;
            for(int j=1;j<=i;j++){
                if(i==j||j==1){
                    v.push_back(1);
                }else{
                int res = compute(i-1,j-1);
                v.push_back(res);
                }
            }

            m.push_back(v);
        }

        return m;
    }

    int compute(int n, int r){
        int res = 1;

        for(int i=0;i<r;i++){
    
            res = res * (n-i) / (i+1);
        }

        return res;
    }
};
