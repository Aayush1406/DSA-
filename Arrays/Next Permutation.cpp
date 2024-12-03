// 1. loop reverse
// 2. find the first dip and get the index.
// 3. Again loop reverse and find just greater than the found index and swap both of them.
// 4. reverse the other part of the array (after index + 1)

#include <algorithm>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i=nums.size()-2;i>=0;i--){ 

            if(nums[i]<nums[i+1]){ 

                index = i;
                break;
            }
        }        

        if(index == -1){
            reverse(nums.begin(),nums.end());
        }else{
            findJustGreater(nums,index);
        }
    }

    void findJustGreater(vector<int>&nums, int index){

        int justgreater = -1;    
        for(int i=nums.size()-1;i>index;i--){
            if(nums[index]<nums[i]){
                
                swap(nums,index,i);
                break;
            }
        }

        reverse(nums.begin()+index+1,nums.end());
    }

    void swap(vector<int>&nums, int x, int y){

        int tmp = nums[x];
        nums[x] = nums[y];
        nums[y] = tmp;
    }
};
