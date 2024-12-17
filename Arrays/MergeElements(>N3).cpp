class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int e1 = INT_MIN, e2 = INT_MIN+1;
        int c1 = 0, c2 = 0;

        for(int i=0;i<nums.size();i++){

            if(c1==0&&nums[i]!=e2){
                e1 = nums[i];
                c1=1;
            }
            else if(c2==0&&nums[i]!=e1){
                e2 = nums[i];
                c2=1;
            }
            
            else if(nums[i]==e1) c1++;
            else if(nums[i]==e2) c2++;
            else{
                c1--;
                c2--;
            }
        }

        int thres = (nums.size())/3;
        vector<int> v;
        c1 = 0, c2 = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==e1) c1++;
            if(nums[i]==e2) c2++;
        }

        if(c1>thres) v.push_back(e1);        
        if(c2>thres) v.push_back(e2);        

        return v;
    }
};
