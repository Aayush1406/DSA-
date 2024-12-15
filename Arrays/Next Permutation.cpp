class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1, breakpointindex = -1;
        for(int i=nums.size()-1;i>0;i--){

            if(nums[i-1]<nums[i]){
                breakpointindex = i-1;
                index = findjustlarge(nums.size()-1, breakpointindex+1, nums[i-1], nums);
                swap(nums[index], nums[breakpointindex]);
                break;
            }
        }

        reverse(nums.begin()+breakpointindex+1, nums.end());
        
    }

    int findjustlarge(int s, int e, int t, vector<int>& nums){
        int index = -1;
        for(int i=s;i>=e;i--){
            if(nums[i]>t){
                index = i;
                break;
            }
        }

        return index;
    }
};
