#include<bits/stdc++.h>
void twoSum(int t, vector<int>nums, int s, set<vector<int>> &st){

    map<int,int> mpp;
    vector<int> v2;
    v2.clear();
    for(int i=s;i<nums.size();i++){
        int x = t - nums[i];
        auto it = mpp.find(x);

        if(it==mpp.end()){
            mpp[nums[i]] = i;
        }else{
        
            v2.push_back(nums[i]);
            v2.push_back(x);
            v2.push_back(-(t));
            sort(v2.begin(),v2.end());
            st.insert(v2);
            v2.clear();
        }
    }

}

vector<vector<int>> triplet(int n, vector<int> &nums)
{
      set<vector<int>> st;
        for(int i=0;i<n;i++){

            int n1 = nums[i];
            int n2 = - (n1);
            twoSum(n2,nums,i+1,st);

        }

        vector<vector<int>> v1(st.begin(), st.end());
        return v1;
}
