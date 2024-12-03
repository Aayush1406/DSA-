
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        if(nums.size()==1){
            return nums[0];
        }
        int gmax = -(1<<30);
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for(int j=i;j<nums.size();j++){

                sum = sum + nums[j];
                if(gmax<sum){
                    gmax = sum;
                }
            }
        }

        return gmax;
    }
};
