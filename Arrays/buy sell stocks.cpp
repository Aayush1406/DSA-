// 1. while traversing keep the track of the min.


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min = prices[0];
        int maxp = 0;
        for(int i=0;i<prices.size();i++){

            int p = prices[i] - min;

            if(maxp<p){
                maxp = p;
            }

            if(min>prices[i]){
                min = prices[i];
            }
        }

        return maxp;
    }
};
