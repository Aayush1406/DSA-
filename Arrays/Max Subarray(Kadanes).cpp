// 1. 3 var. n, max, sum
// 2. see if sum + n <0
// 3. compare it with max
// 4. else sum+=n and comparew with max

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int max = -(1<<30);
        int sum = 0;

        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){

            int n = nums[i];

            if(sum + n <0){
                if(max<n){
                  max = n;
                }
                sum = 0;
            }else{
                sum = sum + n;
            if(max<sum){
                max = sum;
            }
          } 
        }

        return max;
    }
};
