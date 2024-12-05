class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        map<int, int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]+=1;
        }

        int num;
        for(auto el:mpp){
            if(el.second>1){
                num = el.first;
                break;
            }
        }

        return num;
  }
};
