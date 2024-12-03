// 1. count no. of 0s,1s,2s in 3 diff. var.
// 2. loop from 0->c0, c0->c0+c1, c0+c1->c0+c1+c2

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count1 = 0;
        int count0 = 0;
        int count2 = 0;

        for(int i=0;i<nums.size();i++){
            int n = nums[i];

            if(n==0){
                count0++;
            }else if(n==1){
                count1++;

            }else{
                count2++;
            }
        }

        for(int i=0;i<count0;i++){
            nums[i] = 0;
        }
        for(int i=count0;i<count0+count1;i++){
            nums[i] = 1;
        }        
        
        for(int i=count1+count0;i<count2+count1+count0;i++){
            nums[i] = 2;
        }

    }
};
