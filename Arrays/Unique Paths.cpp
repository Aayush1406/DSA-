class Solution {
public:
    int uniquePaths(int m, int n) {
        int ans = findCombination(m+n-2,m-1);
        return ans;
    }


    int findCombination(int n, int r){

        long long ans = 1;
        for(int i=r;i>0;i--){
            ans = ans * (n-i+1)/(r-i+1);
        }

        return ans;

    }
};
