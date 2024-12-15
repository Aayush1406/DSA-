class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minnum = INT_MAX;
        int maxnum = INT_MIN;

        for(int i=0;i<prices.size();i++){
            int currmin = prices[i];
            minnum = min(minnum,currmin);

            int diff = prices[i] - minnum;

            maxnum = max(maxnum,diff);
        }

        if(maxnum<0){
            return 0;
        }else{
            return maxnum;
        }
 
    }
};
