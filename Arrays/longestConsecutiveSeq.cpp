class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int> st;

        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        int cnt = 1, maxCnt = 1;
        for(auto el:st){

            if(st.find(el-1)!=st.end())continue;
            else{

                cnt = 1;
                while(st.find(el+1)!=st.end()) {
                    cnt++;
                    el+=1;
                }

                maxCnt = max(cnt, maxCnt);
            }
        }

    return maxCnt;

    }
};
