class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> v1;
        for(int i=1;i<=numRows;i++){
            vector<int> v2;
            for(int j=1;j<=i;j++){
                int el = findelement(i,j);
                v2.push_back(el);
            }

            v1.push_back(v2);
        }

        return v1;    
    }

    int findelement(int r,int c){
        if(c==1 || c==r){
            return 1;
        }else{
            r-=1,c-=1;
            int ans = 1;
            int index = 1;
            for(int i=0;i<c;i++){
                ans = ans * (r-i)/(index);
                index++;
            }

            return ans;
        }
    
    }
};
